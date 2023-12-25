#include "Q-color.hpp"

int main() {
  {
    Color cc(0.2, 0.4, 0.6);
    cout << setprecision(2) << cc[0] << "," << cc[1] << "," << cc[2] << endl;
  }
  {
    const Color cc(0.1, 0.3, 0.5);
    cout << setprecision(2) << cc[0] << "," << cc[1] << "," << cc[2] << endl;
  }
}
