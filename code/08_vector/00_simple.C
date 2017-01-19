#include <vector>

int main()
{
  // start with 10 elements
  std::vector<int> v(10);

  for (unsigned int i=0; i<v.size(); ++i)
    v[i] = i;
}
