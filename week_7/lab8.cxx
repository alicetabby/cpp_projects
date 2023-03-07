#include <iostream>
#include <cstdlib> // size_t
#include <cmath>
using namespace std;

int main() {
  typedef int value_type; // Basically an alias for when you may want to change a data type.
  
  value_type x;
  value_type y;

  size_t a = pow(2, 63) - 1;

  cout << a << endl;

  return 0;
}
