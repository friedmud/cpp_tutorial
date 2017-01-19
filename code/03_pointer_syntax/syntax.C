#include <iostream>

int main()
{
  int a = 5;
  int *p;       // declare a pointer
  p = &a;       // set 'p' equal to address of 'a'
  *p = *p + 2;  // get value pointed to by 'p', add 2,
  // store result in same location

  std::cout <<  a << "\n";  // prints 7
  std::cout << *p << "\n";  // prints 7
  std::cout <<  p << "\n";  // prints an address (0x7fff5fbfe95c)
}
