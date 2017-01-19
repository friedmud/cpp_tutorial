#include <iostream>

int main()
{
  int a;
  int *b = new int;    // dynamic allocation
  int &r = *b;         // creating a reference to newly created variable

  a = 4;
  r = 5;
  int c = a + r;

  std::cout << c << std::endl;  // prints 9
  delete b;

  return 0;
}
