/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:16:24 by meharit           #+#    #+#             */
/*   Updated: 2023/09/28 15:16:25 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"
class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(float _x, float _y);
        Point(const Point& og);
        Point& operator=(const Point& og);
        ~Point();
        Fixed    get_x() const;
        Fixed    get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif