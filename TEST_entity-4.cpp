#include "Q-entity.hpp"

int main() {
  {
    unique_ptr<Entity> p(new DownMover(7, 8));
    p->print();
    p->update();
    p->print();
  }
}
