#include "point.h"
#include <cmath> 

namespace chou_li
{
    point::point(double x_, double y_)
    {
        x = x_;
        y = y_;
    }

    double point::dist(point& p)
    {
        double a = x - p.getx();
        double b = y - p.gety();
        double c = sqrt((a*a)+(b*b));
        return c;
    }

    bool operator ==(const point& p1, const point& p2)
    {
        bool checkx = (p1.getx() == p2.getx()); // == is operator for double type operands
        bool checky = (p1.gety() == p2.gety()); // == is operator for double type operands
        return checkx && checky;
    }

    bool operator !=(const point& p1, const point& p2)
    {
        return !(p1 == p2); // == is the overloaded operator above
    }

    point operator +(const point& p1, const point& p2)
    {
        double x_sum = p1.getx() + p2.getx(); // + is operator for double type operands
        double y_sum = p1.gety() + p2.gety(); // + is operator for double type operands
        point p_sum(x_sum, y_sum);  // construct a point with calculated values
                                    // as arguments
        return p_sum;
    }
}
