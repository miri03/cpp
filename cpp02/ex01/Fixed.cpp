/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/23 01:03:19 by meharit          ###   ########.fr       */
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
	std::cout << "Int constructor called" << " " << nb << std::endl;
	value = roundf(nb * (1 << Fract_bits));
	std::cout << "[int] value = " << value << std::endl;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << " " << nb << std::endl;
	value = roundf(nb * (1 << Fract_bits));
	std::cout << "value = " << value << std::endl;
	
}

Fixed::Fixed(const Fixed& og)
{
	std::cout << "Copy constructor called" << std::endl;
	value = og.getRawBits(); //?
}

Fixed& Fixed::operator=(const Fixed& og)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = og.getRawBits(); //?
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits( int const raw )
{
	value = raw;
}