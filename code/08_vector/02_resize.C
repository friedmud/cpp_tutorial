#include <vector>

int main()
{
  // start with 0 elements
  std::vector<int> v;
  v.resize(10);  // creates 10 elements

  for (unsigned int i=0; i<10; ++i)
    v[i] = i;
}
