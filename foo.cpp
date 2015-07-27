#include <iostream>

int main() {
#if defined(NDEBUG)
  std::cout << "Release build" << std::endl;
#else
  std::cout << "Debug build" << std::endl;
#endif
  std::cout << "sizeof(int, long, long long): ";
  std::cout << sizeof(int) << " ";
  std::cout << sizeof(long) << " ";
  std::cout << sizeof(long long) << std::endl;
}