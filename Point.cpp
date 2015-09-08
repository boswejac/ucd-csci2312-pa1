#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;
// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

void Point::setZ(double newZ) {
  z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

double Point::getZ(){
  return z;
}

//calculates distance from point to point using pythag theorem
double Point::distanceTo(Point &point) {

  return sqrt(((x-point.getX())*(x-point.getX()))+((y-point.getY())*(y-point.getY()))+((z-point.getZ())*(z-point.getZ())));
}

//finds length of all sides using distanceTo() function, then
//calculates area of triangle using side lengths and heron's theorem
double Point::computeArea(Point &point1, Point &point2, Point &point3) {
  double side1 = point1.distanceTo(point2);
  double side2 = point2.distanceTo(point3);
  double side3 = point1.distanceTo(point3);

  return (sqrt((side1+side2+side3)*(side1+side2-side3)*(side2+side3-side1)*(side1+side3-side2))/4);
}
