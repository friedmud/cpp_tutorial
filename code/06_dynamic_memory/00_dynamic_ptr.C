#include <iostream>

int main()
{
  int a;
  int *b;

  b = new int; // dynamic allocation, what is b's value?

  a = 4;
  *b = 5;
  int c = a + *b;

  std::cout << c << std::endl;  // prints 9
  delete b;

  return 0;
}
