#ifndef CARTESIAN_CPP
#define CARTESIAN_CPP
#include <iostream>
#include "Cartesian.h"

Cartesian::Cartesian(double initX, double initY)
{
  x = initX;
  y = initY;
}

Cartesian::Cartesian(const Polar &polar)
{
  x = polar.getR() * cos(polar.getA());
  y = polar.getR() * sin(polar.getA());
}

double Cartesian::getX() const
{
  return x;
}
double Cartesian::getY() const
{
  return y;
}

Cartesian Cartesian::addX(double xToAdd) const
{
  Cartesian temp(x, y);
  temp.x = x +xToAdd;
  return temp; 
}

Cartesian Cartesian::addY(double yToAdd) const
{
  Cartesian temp(x, y);
  temp.y = y + yToAdd;
  return temp;
}

int main()
{
  return 0;
}

#endif
