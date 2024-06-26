/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:04:59 by meharit           #+#    #+#             */
/*   Updated: 2023/09/30 16:36:43 by meharit          ###   ########.fr       */
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
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	
};

#endif