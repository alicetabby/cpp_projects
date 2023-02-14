#include "rectangle.h"

rectangle::rectangle(point p1, point p2) {
  x1 = p1.getx();
  y1 = p1.gety();
  x2 = p2.getx();
  y2 = p2.gety();
}
