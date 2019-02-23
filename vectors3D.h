// Copyright Grama Nicolae 2019
#ifndef VECTORS3D_H
#define VECTORS3D_H

#include "./points3D.h"
#include <math.h>

template <typename coordinate>
class Vector3D : public Point {
   public:
    Vector3D();
    Vector3D(coordinate x, coordinate y, coordinate z);
    ~Vector3D();
    Vector3D add(Vector3D v);
    Vector3D substract(Vector3D v);
    Vector3D multiply(coordinate scale);
    Vector3D divide(coordinate scale);
    coordinate distance(Point) = delete;
    coordinate distance(Vector3D v);
    coordinate magnitude();
    Vector3D normalize();
    // Vector3D limit(coordinate max); - limit the magnitude of a vector
    coordinate heading();
    // coordinate angleWith(Vector3D v);-find the angle between two vectors(rads)
    coordinate dot(Vector3D v);    // dot product
    Vector3D cross(Vector3D v);  // cross product
};

#endif