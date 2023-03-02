#include "point.h"
#include "rectangle.h"
#include <iostream>

using namespace std;
using namespace chou_li;

int main() {
    point p1;
    point p2(4,7);
    point p3(-4,-7);
    point p4(2,3);

    rectangle r1(p1, p2);
    rectangle r2(p1, p3);
    rectangle r3(p1, p4);

    cout << "r1 area = " << r1.area() << endl;
    cout << "r2 area = " << r2.area() << endl;
    cout << "r3 area = " << r3.area() << endl;
    cout << "r1 == r2 " << (r1 == r2) << endl;
    cout << "r1 == r3 " << (r1 == r3) << endl;

    //cout << "r1.a = " << r1.a << endl;

    return 0;
}
