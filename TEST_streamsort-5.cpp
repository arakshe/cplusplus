#include "Q-streamsort.hpp"

int main() {
  {
    stringstream input("3 2 a 1");
    streamsort(input);
  }
}
