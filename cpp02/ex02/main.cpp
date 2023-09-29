/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:40:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/28 17:41:24 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a(0.5f);
	Fixed d(2.5f);
	Fixed e(0);
	
	Fixed x1(0); //p
	Fixed x2(0);

	Fixed x3(-2); //a
	Fixed y1(1);

	Fixed y2(5); //c
	Fixed y3(2);
	
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	Fixed z = (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2;
	
	std::cout << z << std::endl;

	
	// std::cout << a << std::endl;

	
	return 0;
}