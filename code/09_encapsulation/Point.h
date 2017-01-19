#ifndef POINT_H
#define POINT_H

class Point
{
public:
  // Constructor
  Point(float x, float y);

  // Accessors
  float getX();
  float getY();
  void setX(float x);
  void setY(float y);

private:
  float _x, _y;
};

#endif
