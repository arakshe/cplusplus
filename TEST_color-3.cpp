#include "Q-color.hpp"

int main() {
  {
    Color cc = Color(0.4, 0.5, 0.6) * 2.0;
    cout << setprecision(2) << cc << endl;
  }
}
