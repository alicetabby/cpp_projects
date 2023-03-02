// CS 2337/L
// 2023 Spring
// 2/14/2023
// rectangle header file

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

namespace chou_li
{
    class rectangle
    {
        public:
            rectangle(point p1, point p2);

            double area();

            friend bool operator ==(rectangle& r1, rectangle& r2);

        private:
            double x1,y1,x2,y2;
            double a, b;
    };
}

#endif
