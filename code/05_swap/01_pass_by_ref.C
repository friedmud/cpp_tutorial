#include <iostream>

// Notice the "&" for pass by reference
void swap(int & a, int & b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int i = 1;
  int j = 2;
  swap (i, j);                  // i and j are arguments
  std::cout << i << " " << j;   // prints 1 2
}
