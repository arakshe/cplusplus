#include "Q-accum.hpp"

int main() {
  {
    int c[] = { 1, 2, 3, 4, 5 };
    int result = conditional_accum(c, c + 5, 0, [](int x){ return x % 2 == 1; });
    cout << result << endl;
  }
}
