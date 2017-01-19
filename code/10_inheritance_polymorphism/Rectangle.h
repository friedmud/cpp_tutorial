#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
public:
  Rectangle(int width, int height, int x=0, int y=0):
    Shape(x,y),
    _width(width),
    _height(height)
  {}

  virtual ~Rectangle() {}

  virtual float area() const;

protected:
  int _width;
  int _height;
};

#endif
