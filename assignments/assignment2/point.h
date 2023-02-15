// Jacob Vandegrift
// 1120903

#ifndef POINT_H
#define POINT_H

namespace vandegrift_jacob {
    class point {
        public:
            point(double x_ = 0, double y_ = 0);
            double getx() const { return x; }
            double gety() const { return y; }

        private:
            double x;
            double y;
    };
}

#endif
