// Jacob Vandegrift
// 1120903

#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"
#include <cmath>

namespace vandegrift_jacob {
    class circle {
        public:
            circle(point p, double r_ = 1);
            circle(double x_ = 0, double y_ = 0, double r_ = 1);

            double getx() const { return x; }
            double gety() const { return y; }
            double getr() const { return r; }
            double area() const { return (M_PI * pow(r, 2)); }

        private:
            double x;
            double y;
            double r;
    };
    bool operator ==(const circle& c1, const circle& c2);
    bool operator &&(const circle& c1, const circle& c2);
}

#endif
