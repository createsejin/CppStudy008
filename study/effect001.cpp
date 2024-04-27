#include "effect001.h"

#include <vector>

using namespace std;
namespace study001 {
class Widget {
 public:
  Widget() = default;
  Widget(const Widget& rhs) = default;
  Widget& operator=(const Widget& rhs) = default;
};

void study001() {
  Widget w1;
  Widget w2(w1);
  w1 = w2;

  Widget w3 = w2;
}

class GamePlayer {
  // static const int NumTurns{5};
  // enum hack
  enum { NumTurns = 5 };
  int scores[NumTurns];
};

const double CostEstimate::FudgeFactor = 1.35;

template <typename T>
inline void callWithMax(const T& a, const T& b) {
  f(a > b ? a : b);
}
// item3 p.17

void study002() {
  char greeting[] = "Hello";
  char* p1 = greeting;
  const char* p2 = greeting;
  char* const p3 = greeting;
  const char* const p4 = greeting;
}

void study003() {
  vector<int> vec;
  const std::vector<int>::iterator iter = vec.begin();
  *iter = 10;
  //++iter; // error! iterator(pointer) is const!
  std::vector<int>::const_iterator cIter = vec.begin();
  //*cIter = 11; // error!
  ++cIter;  // fine
}

class Rational {
  const double value_;
  friend const Rational operator*(const Rational& lhs, const Rational& rhs);

 public:
  explicit Rational(const double value) : value_(value) {}
  double get_value() { return value_; }
};

const Rational operator*(const Rational& lhs, const Rational& rhs) {
  return Rational(lhs.value_ * rhs.value_);
}
}  // namespace study001
