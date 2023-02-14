#include "point.h"

/*
point::point() {
  x = 0;
  y = 0;
}
*/

point::point(double x_, double y_) {
  x = x_;
  y = y_;
}

double point::getx() const{
  return x;
}

double point::gety() const{
  return y;
}

bool operator ==(const point& p1, const point& p2) {
  bool checkx = (p1.getx() == p2.getx());
  bool checky = (p1.gety() == p2.gety());
  return checkx && checky;
}

bool operator !=(const point& p1, const point& p2) {
  return !(p1 == p2);
}

point operator +(const point& p1, const point& p2) {
  double x_sum = p1.getx() + p2.getx();
  double y_sum = p1.gety() + p2.gety();
  point p_sum(x_sum, y_sum);
  return p_sum;
}
