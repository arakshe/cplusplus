#include "Q-streamsort.hpp"

int main() {
  {
    stringstream input("2 1 -2 3 40");
    streamsort(input);
  }
}
