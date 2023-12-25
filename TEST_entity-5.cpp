#include "Q-entity.hpp"

int main() {
  {
    unique_ptr<Entity> p(new Destroyer(9, 9));
    p->print();
    p->update();
    p->print();
  }
}
