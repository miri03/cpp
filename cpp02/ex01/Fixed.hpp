/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:59 by meharit           #+#    #+#             */
/*   Updated: 2023/09/21 21:38:23 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int value;
		static const int Fract_bits;
		
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& op);
		~Fixed();
		
		Fixed(const int nb);
		Fixed(const float nb);
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	
};

#endif

/*

3.5

00000000 00000000 00000000 00000011 

00000000 00000000 00000001 00000000

00000000 00000000 00000001 00000011


*/