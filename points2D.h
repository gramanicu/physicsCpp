// Copyright Grama Nicolae 2019
#ifndef POINTS2D_H
#define POINTS2D_H

#include <math.h>

template <typename coordinate>
class Point {
   protected:
    coordinate x;
    coordinate y;

   public:
    Point();
    Point(coordinate x, coordinate y);
    ~Point();
    void setX(coordinate x);
    void setY(coordinate y);
    void setXY(coordinate x, coordinate y);
    coordinate getX();
    coordinate getY();
    coordinate distance(Point p);
};

#endif