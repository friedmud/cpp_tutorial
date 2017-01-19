#include <iostream>

int addition (int a, int b);

int main()
{
  int z = addition (5,3);
  std::cout << "The result is " << z << std::endl;
  return 0;
}

int addition (int a, int b)
{
  return a + b;
}
