/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:40:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/25 00:41:35 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	const Fixed a(0.5f);
	const Fixed d(2.5f);
	Fixed e(0);
	
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a + d << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a * d << std::endl;
	// std::cout << e << std::endl;
	// std::cout << e++ << std::endl;
	// std::cout << e << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	
	std::cout << Fixed::max(a, e) << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}