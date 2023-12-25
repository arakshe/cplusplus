#include "Q-accum.hpp"

int main() {
  {
    vector<int> c;
    int result = conditional_accum(c.begin(), c.end(), 5, [](int){ return true; });
    cout << result << endl;
  }
}
