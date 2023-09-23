/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/23 20:04:46 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::Fract_bits = 8;

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	value = roundf(nb * (1 << Fract_bits));
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(nb * (1 << Fract_bits));
}

Fixed::Fixed(const Fixed& og)
{
	std::cout << "Copy constructor called" << std::endl;
	*this=og;
}

Fixed& Fixed::operator=(const Fixed& og)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = og.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat( void ) const
{
	return ((float)value / (1 << Fract_bits));
}

int		Fixed::toInt( void ) const
{
	return (value / (1 << Fract_bits));
}

std::ostream&	operator<<(std::ostream& os, Fixed& cl)
{
	os << cl.toFloat();
	return (os);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& cl)
{
	os << cl.toFloat();
	return (os);
}

int		Fixed::getRawBits( void ) const
{
	return (value);
}

bool	Fixed::operator==(const Fixed& obj)
{
	return ((*this).value == obj.value);
}