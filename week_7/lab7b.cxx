#include <iostream>
using namespace std;

void f1() {
  int A[5] = {99, 88, 73, 85, 100};

  A[3] = 77;
  double total = 0;

  for (int i = 0; i < 5; i++) {
    cout << A[i] << " ";
    total += A[i];
  }
  cout << endl;
  cout << "total = " << (total/5.0) << endl;
}

void f2(int& a, int b) {
  a += b;
}

void f3() {
  int x = 3;
  int y = 4;
  f2(x,y);
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}

void f4(int A[]) {
  A[1] = 3;
}

void print(int A[], int n) {
  for (int i=0; i<n; ++i)
    cout << A[i] << " ";
  cout << endl;
}

void f5() {
  int B[3] = {23, 41, 5};
  print(B,3);
  f4(B);
  print(B,3);
}

int main() {
  f5();

  return 0;
}
