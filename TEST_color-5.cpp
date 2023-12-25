#include "Q-color.hpp"

int main() {
  {
    const Color cc(0.1, 0.3, 0.5);
    try {
      cout << setprecision(2) << cc[-1] << endl;
    } catch (const out_of_range & e) {
      cout << "exception" << endl;
    }
  }
  {
    const Color cc(0.1, 0.3, 0.5);
    try {
      cout << setprecision(2) << cc[3] << endl;
    } catch (const out_of_range & e) {
      cout << "exception" << endl;
    }
  }
}
