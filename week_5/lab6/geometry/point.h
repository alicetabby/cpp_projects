#ifndef POINT_H
#define POINT_H

class point {
  public:
    //point();
    point(double x_ = 0, double y_ = 0);

    double getx() const;
    double gety() const;

  private:
    double x, y;

};
bool operator ==(const point& p1, const point& p2);
bool operator !=(const point& p1, const point& p2);
point operator +(const point& p1, const point& p2);
#endif
