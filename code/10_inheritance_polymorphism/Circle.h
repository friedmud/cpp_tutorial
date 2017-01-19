#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: public Shape
{
public:
  Circle(int radius, int x=0, int y=0):
      Shape(x,y), _radius(radius)
  {}

  virtual ~Circle() {}

  virtual float area() const;

protected:
  int _radius;
};

#endif
