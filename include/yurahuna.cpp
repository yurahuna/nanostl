#include <iostream>
#include "nanounordered_map.h"
#include "nanoutility.h"
using namespace nanostl;

int main() {
  unordered_map<int, char> mp;
  mp.insert(pair<const int, char>(3, 'a'));
  // mp.insert(13, 'b');
  // mp.insert(22, 'c');
  // mp.insert(5, 'd');

  mp.print();

  return 0;
}
