#include <iostream>
#include <memory>
using namespace std;

class Entity {
public:
  Entity(int x, int y): m_x(x), m_y(y) {}
  virtual ~Entity() {}
  virtual void update() = 0;
  void moveBy(int dx, int dy) { m_x += dx; m_y += dy; }
  void print() { cout << m_x << "," << m_y << endl; }

protected:
  int m_x, m_y;
};

class UpMover : public Entity {
public:
  UpMover(int x, int y) : Entity(x, y) {}
  void update() override { moveBy(0, 1); }
};

class DownMover : public Entity {
public:
  DownMover(int x, int y) : Entity(x, y) {}
  void update() override { moveBy(0, -1); }
};

class Destroyer : public Entity {
public:
  Destroyer(int x, int y) : Entity(x, y) {}
  ~Destroyer() override { cout << "Destroyed!" << endl; }
  void update() override {}
};
