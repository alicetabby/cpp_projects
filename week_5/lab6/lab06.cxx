#include <iostream>
using namespace std;

void f1(int a) {
  a += 7;
}

void f2(int& b) {
  b += 7;
}

void f3(int a, int b = 2, int c = 3) {
  int d = a + b + c;
  cout << "d = " << d << endl;

int main() {
  int a = 6;
  cout << "a = " << a << endl;
  f2(a);
  cout << "a = " << a << endl;
  return 0;
}
