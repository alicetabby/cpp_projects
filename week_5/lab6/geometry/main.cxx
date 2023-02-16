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

  cout << "p1 != p2 " << (p1 != p2) << endl;
  cout << "p1 != p3 " << (p1 != p2) << endl;

  point p5(2,3);
  point p6(7,2);
  point p4;
  p4 = p5 + p6;
  cout << "x = " << p4.getx() << endl;
  cout << "y = " << p4.gety() << endl;

  point p7(3,4);
  cout << "distance between p1 and p7 = ";
  cout << p1.dist(p7) << endl;

  return 0;
}
