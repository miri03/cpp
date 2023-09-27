/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:40:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/27 15:38:56 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a(0.5f);
	Fixed d(2.5f);
	Fixed e(0);
	
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a + d << std::endl;
	std::cout << a << std::endl;
	// std::cout << a * d << std::endl;
	// std::cout << e << std::endl;
	// std::cout << e++ << std::endl;
	// std::cout << e << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	// std::cout << Fixed::max(a, e) << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}