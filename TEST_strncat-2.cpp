#include "Q-strncat.hpp"

int main() {
  {
    char buf[10] = { '1', '2', '3', '4', '5', 0, 'x', 'x', 'x', 'x'};
    cout << strncat(buf, 10, "67") << " '" << buf << "'" << endl;
  }
}
