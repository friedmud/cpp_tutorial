#include <iostream>

// Note!  std::max() exists, but this is just a demonstration!
template <class T>
T getMax (T a, T b)
{
  return (a > b ? a : b); // "ternary" operator
}

int main()
{
  int i = 5, j = 6, k;

  float x = 3.142;
  float y = 2.718;
  float z;

  k = getMax(i, j);       // uses int version

  std::cout << "Max1: " << k << std::endl;

  z = getMax(x, y);       // uses float version

  std::cout << "Max2: " << z << std::endl;

  k = getMax<int>(i, j);  // explicitly calls int version

  std::cout << "Max3: " << k << std::endl;

  return 0;
}
