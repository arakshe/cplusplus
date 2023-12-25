#include "Q-accum.hpp"

int main() {
  {
    vector<string> c = { "a", "b", "cc", "dd" };
    string result = conditional_accum(c.cbegin(), c.cend(), string(), [](const string & x){ return x.size() > 1; });
    cout << result << endl;
  }
}
