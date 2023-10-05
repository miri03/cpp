/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:59 by meharit           #+#    #+#             */
/*   Updated: 2023/10/05 19:46:05 by meharit          ###   ########.fr       */
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
		Fixed& operator=(const Fixed& op);
		~Fixed();
		
		Fixed(const int nb);
		Fixed(const float nb);
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
	
};

std::ostream&	operator<<(std::ostream& os, Fixed& cl);
std::ostream&	operator<<(std::ostream& os, const Fixed& cl);

#endif
