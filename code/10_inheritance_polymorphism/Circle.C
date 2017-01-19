#include "Circle.h"

#define PI 3.1415892653

float
Circle::area() const
{
  return PI * _radius * _radius;
}
