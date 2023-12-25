#include "Q-binstree.hpp"

int main() {
  {
    BST b;
    b.insert(1);
    b.insert(2);
    b.insert(3);
    b.insert(4);
    b.insert(4);
    b.insert(4);
    b.insert(4);
    b.print();
  }
}
