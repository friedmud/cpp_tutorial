#ifndef PRINTINFORMATION_H
#define PRINTINFORMATION_H

#include "Shape.h"

#include <iostream>

void printInformation(const Shape & shape)
{
  shape.printPosition();
  std::cout << "Area: " << shape.area() << std::endl;
}

#endif
