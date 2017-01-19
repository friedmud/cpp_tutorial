#include <iostream>

int main()
{
  int a = 5;
  int &r = a;  // define and _initialize_ a ref
  r = r + 2;

  std::cout <<  a << "\n";  // prints 7
  std::cout <<  r << "\n";  // prints 7
  std::cout << &r << "\n";  // prints address of a
}
