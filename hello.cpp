#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  std::cout << "Hello world :";
  int t = 10;
  while (t--) {
    std::cout << t;
    std::cout << '\n';
  }
  return 0;
}
