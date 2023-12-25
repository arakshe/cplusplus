#include "Q-chararray.hpp"

int main() {
  {
    CharArray ca(string("hello4"));
    CharArray cb(move(ca));
    ca = move(cb);
    ca.print();
    cb.print();
  }
}
