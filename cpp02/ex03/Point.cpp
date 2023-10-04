/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:16:12 by meharit           #+#    #+#             */
/*   Updated: 2023/10/04 02:17:03 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float _x, float _y) : x(_x), y(_y) {}

Point::Point(const Point& og) : x(og.x) , y(og.y) {}

Point&  Point::operator=(const Point& og)
{
    (void) og;
    return(*this);
}

Point::~Point(){}

Fixed Point::get_x() const  
{
    return (this->x);
}

Fixed Point::get_y() const
{
    return (this->y);
}
