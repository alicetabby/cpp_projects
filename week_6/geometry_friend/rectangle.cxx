#include "rectangle.h"
#include <cmath>
#include <iostream>

namespace chou_li
{

    rectangle::rectangle(point p1, point p2) {
        x1 = p1.getx();
        y1 = p1.gety();
        x2 = p2.getx();
        y2 = p2.gety();

        a = abs(x1-x2);
        b = abs(y1-y2);
    }

    double rectangle::area() {
        return (a*b);
    }

    bool operator ==(rectangle& r1, rectangle& r2) {
        std::cout << "r1.a = " << r1.a << std::endl;
        return r1.area() == r2.area();
    }
}
