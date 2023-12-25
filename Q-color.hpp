#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Color {
public:
  Color() : m_r(0), m_g(0), m_b(0) {}
  Color(const Color & o) : m_r(o.m_r), m_g(o.m_g), m_b(o.m_b) {}
  Color(float ir, float ig, float ib) : m_r(clamp(ir)), m_g(clamp(ig)), m_b(clamp(ib)) {}

  float operator[](int idx) const {
    switch (idx) {
      case 0: return m_r;
      case 1: return m_g;
      case 2: return m_b;
      default: throw std::out_of_range("Index out of range");
    }
  }

  float getRed() const { return m_r; }
  float getGreen() const { return m_g; }
  float getBlue() const { return m_b; }

private:
  Color & operator=(const Color &) = delete;
  static inline float clamp(float x) {
    return (x < 0) ? 0 : ((x > 1) ? 1 : x);
  }
  const float m_r, m_g, m_b;
};

Color operator*(float f, const Color &c) {
  return Color(f * c.getRed(), f * c.getGreen(), f * c.getBlue());
}

Color operator*(const Color &c, float f) {
  return f * c;
}

ostream & operator<<(ostream & os, const Color & c) {
    os << c.getRed();
    if (c.getRed() - static_cast<int>(c.getRed()) == 0) { // Check for whole number
        os << ".0";
    }
    os << "," << c.getGreen();
    if (c.getGreen() - static_cast<int>(c.getGreen()) == 0) { // Check for whole number
        os << ".0";
    }
    os << "," << c.getBlue();
    if (c.getBlue() - static_cast<int>(c.getBlue()) == 0) { // Check for whole number
        os << ".0";
    }
    return os;
}