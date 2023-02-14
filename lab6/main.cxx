#include "throttle.h"
#include <iostream>
using namespace std;
using namespace vandegrift_jacob;

int main() {
  throttle t_one;
  t_one.shut_off();
  t_one.shift(1);
  cout << "t_one flow = ";
  cout << t_one.flow() << endl;

  throttle t_two(8);
  t_two.shut_off();
  t_two.shift(4);
  cout << "t_two flow = ";
  cout << t_two.flow() << endl;

  return 0;
}
