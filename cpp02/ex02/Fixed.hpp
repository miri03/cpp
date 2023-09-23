/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:59 by meharit           #+#    #+#             */
/*   Updated: 2023/09/23 20:02:18 by meharit          ###   ########.fr       */
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
		
		int		getRawBits( void ) const;

		bool	operator==(const Fixed& obj);
	
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
