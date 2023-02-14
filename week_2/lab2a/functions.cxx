#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "sin(.5) = " << sin(.5) << endl;

  cout << "PI = " << M_PI << endl;

  double deg1 = 45;
  double rad1 = deg1 * M_PI / 180;

  cout << "tan(" << rad1 << ") = " << tan(rad1) << endl;

  double y1 = 4;
  double y2 = 3;
  double z1;

  z1 = sqrt(y1);
  cout << "z1 = " << z1 << endl;

  double z2 = pow(y1, y2);
  cout << "z2 = " << z2 << endl;

  double a = 3;
  double b = 4;
  double c = sqrt(pow(a,2) + pow(b,2));
  cout << "c = " << c << endl;

  return 0;
}
