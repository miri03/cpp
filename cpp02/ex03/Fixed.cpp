/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/29 15:03:25 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::Fract_bits = 8;

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int nb)
{
	value = roundf(nb * (1 << Fract_bits));
}

Fixed::Fixed(const float nb)
{
	value = roundf(nb * (1 << Fract_bits));
}

Fixed::Fixed(const Fixed& og)
{
	*this=og;
}

Fixed& Fixed::operator=(const Fixed& og)
{
	value = og.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

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

void	Fixed::setRawBits( int const raw )
{
	value = raw;
}

int		Fixed::getRawBits( void ) const
{
	return (value);
}

bool	Fixed::operator>(const Fixed& obj)
{
	return ((*this).value > obj.value);
}

bool	Fixed::operator<(const Fixed& obj)
{
	return ((*this).value < obj.value);
}
bool	Fixed::operator>=(const Fixed& obj)
{
	return ((*this).value >= obj.value);
}
bool	Fixed::operator<=(const Fixed& obj)
{
	return ((*this).value <= obj.value);
}

bool	Fixed::operator==(const Fixed& obj)
{
	return ((*this).value == obj.value);
}

bool	Fixed::operator!=(const Fixed& obj)
{
	return ((*this).value != obj.value);
}

Fixed	Fixed::operator+(const Fixed& obj)
{
	Fixed tmp;
	
	tmp.value = this->value + obj.value;
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& obj)
{
	Fixed tmp;
	tmp.value = this->value - obj.value;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& obj)
{
	Fixed tmp((this->toFloat() * obj.toFloat()));
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& obj)
{
	Fixed tmp(this->toFloat() / obj.toFloat());
	return (tmp);
}

Fixed&	Fixed::operator++()
{
	this->value = (this->toFloat() + 1) * (1 << 8);
	return (*this);
}

float	Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->setRawBits((this->toFloat() + 1) * (1 << 8));
	return (tmp.toFloat()); 
}

Fixed&	Fixed::operator--()
{
	this->value = (this->toFloat() - 1) * (1 << 8);
	return (*this);
}

float	Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->value = (this->toFloat() - 1) * (1 << 8);
	return (tmp.toFloat()); 
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.value < b.value)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.value < b.value)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.value > b.value)
		return (a);
	return (b);
}