//
// Created by Ivo Georgiev on 8/25/15.
//

#include "Point.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
    float x,y,z;
    cout << endl << endl;
    cout << "This program calculates the area of a triangle defined by 3 three-dimensional points" << endl << endl;
    cout << "For the first point, please enter " << endl << endl;
    cout << "x coordinate" << endl;
    cin >> x;
    cout << "y coordinate" << endl;
    cin >> y;
    cout << "z coordinate" << endl;
    cin >> z;
    Point p1(x,y,z);
    cout << "For the second point, please enter " << endl << endl;
    cout << "x coordinate" << endl;
    cin >> x;
    cout << "y coordinate" << endl;
    cin >> y;
    cout << "z coordinate" << endl;
    cin >> z;
    Point p2(x,y,z);
    cout << "For the third point, please enter" << endl << endl;
    cout << "x coordinate" << endl;
    cin >> x;
    cout << "y coordinate" << endl;
    cin >> y;
    cout << "z coordinate" << endl;
    cin >> z;
    Point p3(x,y,z);
    Point pc;
    cout << setprecision(2) << fixed << "The area of the triangle is : " << pc.computeArea(p1,p2,p3) << endl;
    return 0;
}
