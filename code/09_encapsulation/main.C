#include "Point.h"

#include <iostream>

int main()
{
  Point p1(1, 2);
  Point p2 = Point(3, 4);
  //Point p3;	// compile error, no default constructor

  std::cout << p1.getX() << "," << p1.getY() << "\n"
            << p2.getX() << "," << p2.getY() << "\n";
}
