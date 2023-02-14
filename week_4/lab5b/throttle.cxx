#include "throttle.h"

namespace vandegrift_jacob {
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
}
