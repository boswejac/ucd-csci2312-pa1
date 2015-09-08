// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
  double x;
  double y;
  double z;

public:
  // Constructors
  Point();                      // default constructor
  Point(double x, double y, double z);    // two-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double newX);
  void setY(double newY);
  void setZ(double newZ);

  // Accessor methods
  double getX();
  double getY();
  double getZ();

  //Calcs
  double distanceTo(Point& point);
  double computeArea(Point& point1, Point& point2, Point& point3);
};


#endif // __point_h