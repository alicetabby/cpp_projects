#include <iostream>
#include <cassert>
using namespace std;

class throttle {
  public:
    throttle();
    throttle(int size);
    void shift(int amount);

    void shut_off() { position = 0; }
    double flow() const { return position / (double)top_position; }
    bool is_on() const { return (flow() > 0); }

  private:
    int position;
    int top_position;
};

throttle::throttle() {
  top_position = 1;
  position = 0;
}

throttle::throttle(int size) {
  assert(0 < size);
  top_position = size;
  position = 0;
}

void throttle::shift(int amount) {
  position += amount;
  if(position < 0)
    position = 0;
  else if(position > top_position)
    position = top_position;
}

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
