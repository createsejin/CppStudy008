#include "study13.h"

#include <fstream>
#include <iomanip>
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

void study003() {
  ifstream inFile{"input.txt"};
  ofstream outFile{"output.txt"};

  inFile.tie(&outFile);

  outFile << "Hello there!";  // still not flushed

  string nextToken;
  inFile >> nextToken;  // flushes outFile
}

void study004() {
  std::ofstream os("test.txt");
  std::ifstream is("test.txt");
  std::string value("0");

  is.tie(&os);
  os << "Hello";
  // is >> value;
  //
  // cout << "Result before tie(): " << std::quoted(value) << "\n";
  //
  // is.clear();

  is >> value;
  cout << "Result after tie(): " << std::quoted(value) << "\n";
}

}  // namespace study13_005
