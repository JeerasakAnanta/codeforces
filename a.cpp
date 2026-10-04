#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::cout << "hello world ; " << std::endl;

  for (int i = 0; i < 10; ++i) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  std::string s;
  std::cout << "enter a string: ";
  std::cin >> s;



  return 0;
}
