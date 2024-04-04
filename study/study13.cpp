#include "study13.h"

#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
namespace fs = std::filesystem;

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

void study005() {
  fs::path p1{R"|(D:\Foo\Bar)|"};
  fs::path p2{R"|(/root/file/to)|"};
  cout << p1 << endl;
  cout << p2 << endl;
}

void study006() {
  filesystem::path p{R"|(/root/Foo)|"};
  p.append("Bar");
  p /= "Bar2";
  p.concat("/Foo2");
  p += "Foo3.txt";
  cout << p << endl;

  for (const auto &component : p) {
    cout << component << "\n";
  };
  cout << endl;
}

}  // namespace study13_005
