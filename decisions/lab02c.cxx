#include <iostream>
using namespace std;

void f1(int x) {
  if (x != 3)
    cout << x << " is not equal to 3" << endl;
}

void f2(int x) {
  if (x != 3)
    cout << x << " is not equal to 3" << endl;
  else
  {
    cout << x;
    cout << " is equal to 3" << endl;
  }
}

void f3(int x) {
  if (x < 10) {
    cout << x;
    cout << " < 10" << endl;
  }
  else if ((x >= 10) && (x < 40))
    cout << "10 <= x < 40" << endl;
  else
    cout << "x >= 40" << endl;
}

int main() {
  int x;
  cin >> x;
  //f1(x);
  //f2(x);
  f3(x); 


  return 0;
}
