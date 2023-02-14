#ifndef THROTTLE_H
#define THROTTLE_H

#include <iostream>
#include <cassert>

namespace vandegrift_jacob {
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
}
#endif
