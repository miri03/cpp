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