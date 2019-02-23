// Copyright Grama Nicolae 2019
#ifndef POINTS3D_H
#define POINTS3D_H

#include <math.h>

template <typename coordinate>
class Point3D {
   protected:
    coordinate x;
    coordinate y;
    coordinate z;

   public:
    Point3D();
    Point3D(coordinate x, coordinate y, coordinate z);
    ~Point3D();
    void setX(coordinate x);
    void setY(coordinate y);
    void setZ(coordinate z);
    void setXYZ(coordinate x, coordinate y, coordinate z);
    coordinate getX();
    coordinate getY();
    coordinate getZ();
    coordinate distance(Point3D p);
};

#endif