#include "study13.h"

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

namespace study13_005 {

void study001() {
  std::string str = "Hello, world";
  std::istringstream in(str);
  std::string word;
  in >> word;
  std::cout << "After reading the word \"" << word << "\" tellg() returns "
            << in.tellg() << "\n";
}

void study002() {
  string str = "Hello, world";
  istringstream in(str);
  string word1, word2;

  in >> word1;
  in.seekg(0);
  in >> word2;

  cout << "word1 = " << word1 << '\n' << "word2 = " << word2 << '\n';
}

}  // namespace study13_005
