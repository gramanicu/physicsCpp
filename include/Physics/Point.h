// Copyright Grama Nicolae 2019
#ifndef POINT_H
#define POINT_H

#include <math.h>

class Point {
   protected:
    double x;
    double y;
    double z;

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
    static double distance(Point p1, Point p2);
    double distance(Point p);
};

#endif