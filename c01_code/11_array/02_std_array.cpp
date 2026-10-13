#include <array>
#include <format>
#include <iostream>

using namespace std;

int main() {
  array<int, 3> arr{9, 8, 7};
  // arrary arr{9, 8, 7}; // Using CTAD
  cout << format("Array size = {}", arr.size()) << endl;
  cout << format("2nd element = {}", arr[1]) << endl;
}
