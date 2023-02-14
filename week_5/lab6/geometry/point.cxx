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
