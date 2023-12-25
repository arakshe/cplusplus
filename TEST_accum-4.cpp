#include "Q-accum.hpp"

int main() {
  {
    list<double> c = { 1.1, 2.2, 5.5 };
    double result = conditional_accum(c.begin(), c.end(), 0.0, [](double x){ return x < 3; });
    cout << setprecision(2) << result << endl;
  }
}
