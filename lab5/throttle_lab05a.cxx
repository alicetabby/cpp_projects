#include <iostream>
using namespace std;

class throttle {
  public:
    void shut_off();
    void shift(int amount);
    double flow() const;
    bool is_on() const;

  private:
    int position;
};

void throttle::shut_off() {
  position = 0;
}

void throttle::shift(int amount) {
  position += amount;
  if(position < 0)
    position = 0;
  else if(position > 6)
    position = 6;
}

double throttle::flow() const {
  return position / 6.0;
}

bool throttle::is_on() const {
  return (flow() > 0);
}

int main() {
  throttle t_one;
  t_one.shut_off();
  t_one.shift(3);
  cout << "t_one flow = ";
  cout << t_one.flow() << endl;

  throttle t_two;
  t_two.shut_off();
  t_two.shift(4);
  cout << "t_two flow = ";
  cout << t_two.flow() << endl;

  return 0;
}
