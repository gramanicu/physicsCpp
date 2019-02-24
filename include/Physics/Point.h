// Copyright Grama Nicolae 2019
#ifndef POINT_H
#define POINT_H

#include <math.h>

class Point {
   protected:
    double x;
    double y;
    double z;
    // bool is3D; - to be implemented

   public:
    Point();
    Point(double x, double y);
    Point(double x, double y, double z);
    ~Point();
    void setX(double x);
    void setY(double y);
    void setZ(double z);
    void setXY(double x, double y);
    void setXYZ(double x, double y, double z);
    double getX();
    double getY();
    double getZ();
    double distance(Point p);
};

#endif