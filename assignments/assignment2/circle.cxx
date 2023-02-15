// Jacob Vandegrift
// 1120903

#include "circle.h"

namespace vandegrift_jacob {
    circle::circle(point p, double r_) {
        x = p.getx();
        y = p.gety();
        r = r_;
    }

    circle::circle(double x_, double y_, double r_) {
        x = x_;
        y = y_;
        r = r_;
    }

    bool operator ==(const circle& c1, const circle& c2) {
        bool X_EQUALITY = (c1.getx() == c2.getx());
        bool Y_EQUALITY = (c1.gety() == c2.gety());
        bool R_EQUALITY = (c1.getr() == c2.getr());
        return (X_EQUALITY && Y_EQUALITY && R_EQUALITY);
    }

    bool operator &&(const circle& c1, const circle& c2) {
        double a = pow((c1.getr() - c2.getr()), 2);
        double b = pow((c1.getx() - c2.getx()), 2) + pow((c1.gety() - c2.gety()), 2);
        double c = pow((c1.getr() + c2.getr()), 2);
        return ((a <= b) && (b <= c));
    }
}
