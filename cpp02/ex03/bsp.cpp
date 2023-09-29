/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:15:44 by meharit           #+#    #+#             */
/*   Updated: 2023/09/29 15:02:29 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0

Fixed calculate_area(Point const a, Point const b, Point const c)
{
	Fixed x1 = a.get_x();
	Fixed y1 = a.get_y();

	Fixed x2 = b.get_x();
	Fixed y2 = b.get_y();
	
	Fixed x3 = c.get_x();
	Fixed y3 = c.get_y();


	Fixed area = (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2;
	area.setRawBits(abs(area.getRawBits()));
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = calculate_area(a, b, c);
	if (area == 0)
	{
		std::cout << "It's not a triangle" << std::endl;
		return (false);
	}
	std::cout << "area " << area << std::endl;

	Fixed PAC = calculate_area(point, a, c);
	std::cout << "PAC " << PAC << std::endl;
	
	Fixed PAB = calculate_area(point, a, b);
	std::cout << "PAB " << PAB << std::endl;

	Fixed PBC = calculate_area(point, b, c);
	std::cout << "PBC " << PBC << std::endl;
	if (PAC == 0 || PAB == 0 || PBC == 0)
	{
		std::cout << "Point is in edge or is a vertex" << std::endl;
		return (false);
	}
	if (PAC + PAB + PBC == area)
		return (true);
	return (false);
}
