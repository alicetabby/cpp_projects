#include "point.h"
#include "rectangle.h"
#include <iostream>
using namespace std;

int main() {
  point p1;
  cout << "x = " << p1.getx() << endl;
  cout << "y = " << p1.gety() << endl;

  point p2(3.3, -9.2);
  cout << "x = " << p2.getx() << endl;
  cout << "y = " << p2.gety() << endl;

  rectangle r1(p1, p2);

  point p3(3);

  cout << "p1 == p2 " << (p1 == p2) << endl;
  cout << "p1 == p3 " << (p1 == p2) << endl;

  return 0;
}
