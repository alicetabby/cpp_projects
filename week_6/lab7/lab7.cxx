#include <iostream>
using namespace std;

void f1() {
  int grades[5] = {}; 

  for(int x = 0; x <= 4; x++) {
    cout << "grades[" << x << "] = " << grades[x] << endl;
  }
}

int main() {
  f1();

  return 0;
}
