/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:50:36 by meryemharit       #+#    #+#             */
/*   Updated: 2023/09/27 19:45:27 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float _x, float _y) : x(_x), y(_y) {}

Point::Point(const Point& og) : x(og.x) , y(og.y) {/*std::cout << "Copy constructor called" << std::endl;*/}

Point&  Point::operator=(const Point& og)
{
    (void) og;
    return(*this);
}

Point::~Point(){}

Fixed Point::get_x() const
{
    return (x.getRawBits());
}

Fixed Point::get_y() const
{
    return (y.getRawBits());
}