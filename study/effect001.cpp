#include "effect001.h"

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
// next: item3 p.17
}  // namespace study001
