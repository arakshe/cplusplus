#include "Q-entity.hpp"

int main() {
  {
    unique_ptr<Entity> p(new UpMover(5, 6));
    p->print();
    p->update();
    p->print();
  }
}
