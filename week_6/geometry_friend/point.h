#ifndef POINT_H
#define POINT_H

namespace chou_li
{
    class point
    {
        public:
            point(double x_ = 0, double y_ = 0); 

            double getx() const { return x; }
            double gety() const { return y; }

            double dist(point& p);
        private:
            double x, y;
    };
    bool operator ==(const point& p1, const point& p2);
    bool operator !=(const point& p1, const point& p2);
    point operator +(const point& p1, const point& p2);
} 

#endif
