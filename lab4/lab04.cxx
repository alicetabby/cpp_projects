#include <iostream>
#include <cassert>
using namespace std;

void print_header() {
  cout << "CONVERSION FROM -50 to 50\n";
  cout << "Celsius Farenheit\n";
}

double c_to_f(double c) {
  return (9.0/5.0) * c + 32.0;
}

void print_temp() {
  for(double c = -50; c <= 50; c += 2)
    cout << c << "C " << c_to_f(c) << "F" << endl;
}

int main() {
  print_header();
  print_temp();

  return 0;
}
