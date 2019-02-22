// Copyright Grama Nicolae 2019
#ifndef POINTS_H
#define POINTS_H

#include <math.h>

class Point {
   protected:
    double x;
    double y;

   public:
    Point();
    Point(double x, double y);
    ~Point();
    void setX(double x);
    void setY(double y);
    void setXY(double x, double y);
    double getX();
    double getY();
    double distance(Point p);
};

#endif