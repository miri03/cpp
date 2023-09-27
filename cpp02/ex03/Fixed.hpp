/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:59 by meharit           #+#    #+#             */
/*   Updated: 2023/09/27 15:36:05 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int Fract_bits;
		
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& og);
		~Fixed();
		
		Fixed(const int nb);
		Fixed(const float nb);
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		bool	operator>(const Fixed& obj);
		bool	operator<(const Fixed& obj);
		bool	operator>=(const Fixed& obj);
		bool	operator<=(const Fixed& obj);
		bool	operator==(const Fixed& obj);
		bool	operator!=(const Fixed& obj);

		Fixed	operator+(const Fixed& obj);
		Fixed	operator-(const Fixed& obj);
		Fixed	operator*(const Fixed& obj);
		Fixed	operator/(const Fixed& obj);

		Fixed&		operator++();
		float		operator++(int);
		Fixed&		operator--();
		float		operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
		const static Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		const static Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& os, Fixed& cl);
std::ostream&	operator<<(std::ostream& os, const Fixed& cl);

#endif

/*

(r / ) | (l * )
 
42.42  00101010 . 01101011 10000101 00100000

Fixed point 00101010 01101011

1 << 8

*/
