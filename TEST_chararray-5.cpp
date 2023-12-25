#include "Q-chararray.hpp"

int main() {
  {
    CharArray ca(string("hello5"));
    CharArray & ca_ref = ca;
    ca = move(ca_ref);
    ca.print();
  }
}
