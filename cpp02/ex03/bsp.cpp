/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:06:32 by meryemharit       #+#    #+#             */
/*   Updated: 2023/09/27 19:47:59 by meryemharit      ###   ########.fr       */
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
    
    return ((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    (void) point;
    Fixed area = calculate_area(a, b , c);
    std::cout << abs(area.getRawBits()) << std::endl;
    return (1);
}