#include "point.h"

point::point() {
  x = 0;
  y = 0;
}

point::point(double x_, double y_) {
  x = x_;
  y = y_;
}

double point::getx() {
  return x;
}

double point::gety() {
  return y;
}
