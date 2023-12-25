#include "Q-chararray.hpp"

int main() {
  {
    CharArray ca(string("hello3"));
    CharArray cb(string("world3"));
    cb = move(ca);
    ca.print();
    cb.print();
  }
}
