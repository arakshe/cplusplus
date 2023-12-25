#include "Q-entity.hpp"

int main() {
  {
    unique_ptr<Entity> p(new DownMover(3, 4));
    p->print();
  }
}
