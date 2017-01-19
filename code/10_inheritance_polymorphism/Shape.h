#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
  Shape(int x=0, int y=0);

  virtual ~Shape() {}

  virtual float area() const = 0;  // Pure Virtual Function

  void printPosition() const;

protected:
  // Coordinates at the centroid of the shape
  int _x;
  int _y;
};

#endif
