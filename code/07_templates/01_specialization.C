#include <iostream>

// Generic Template
template<class T>
void print(T value)
{
  std::cout << value << std::endl;
}

// Specialization
template<>
void print<bool>(bool value)
{
  if (value)
    std::cout << "true";
  else
    std::cout << "false";

  std::cout << std::endl;
}

int main()
{
  int a = 5;
  bool b = true;

  print(a); // prints 5

  print(b); // prints true
}
