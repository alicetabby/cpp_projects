#ifndef POINT_H
#define POINT_H

class point {
  public:
    point();
    point(double x_, double y_);

    double getx();
    double gety();

  private:
    double x, y;

};

#endif
