#include <iostream>
#include <vector>

int main() {
  std::vector<char> vec;
  vec.push_back(1); // true
  vec.push_back(0); // false
  bool b = vec[0] != 0; // Explicitly convert to bool
  std::cout << b << std::endl; // Output: 1
  return 0;
}
