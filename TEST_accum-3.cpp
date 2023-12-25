#include "Q-accum.hpp"

int main() {
  {
    vector<int> c = { 2 };
    int result = conditional_accum(c.begin(), c.end(), 3, [](int){ return false; });
    cout << result << endl;
  }
}
