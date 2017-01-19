#include "Shape.h"

#include <iostream>

Shape::Shape(int x, int y) :
    _x(x),
    _y(y)
{}

void
Shape::printPosition() const
{
  std::cout << "Position: (" << _x << "," << _y << ")" << std::endl;
}
