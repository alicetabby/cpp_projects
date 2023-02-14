#include <iostream>
using namespace std;

void f1() {
  cout << "Welcome to C++" << endl;
}

void f2(int a) {
  cout << a << " + 5 = " << (a+5) << endl;
}

void f3(int a, double y) {
  int b = 2;
  cout << a << " * " << y << " + " << b << " = " << (a*y+b) << endl;

  f2(3);
}

int main() {
  f1();
  
  f2(10);

  f3(2, 2.2);
  
  int x = 3;
  f3(x, 2.2);

  return 0;
}
