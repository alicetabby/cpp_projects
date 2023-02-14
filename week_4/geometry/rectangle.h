#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

class rectangle {
  public:
    rectangle(point p1, point p2);

  private:
    double x1, y1, x2, y2;
};

#endif
