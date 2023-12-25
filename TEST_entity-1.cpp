#include "Q-entity.hpp"

int main() {
  {
    unique_ptr<Entity> p(new UpMover(1, 2));
    p->print();
  }
}
