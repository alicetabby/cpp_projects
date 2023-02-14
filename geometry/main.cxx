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

  return 0;
}
