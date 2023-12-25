#include "Q-chararray.hpp"

int main() {
  {
    CharArray ca(string("hello2"));
    CharArray cb(move(ca));
    ca.print();
    cb.print();
  }
}
