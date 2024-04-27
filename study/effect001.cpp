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

}  // namespace study001
