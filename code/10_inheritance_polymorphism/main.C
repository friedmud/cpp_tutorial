#include "PrintInformation.h"

#include "Rectangle.h"
#include "Circle.h"

int main()
{
  // create a couple of shapes
  Rectangle r(3, 4);
  Circle c(3, 10, 10);

  // Polymorphic!
  printInformation(r);   // pass a Rectangle into a Shape reference
  printInformation(c);   // pass a Circle into a Shape reference
}
