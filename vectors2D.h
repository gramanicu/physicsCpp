// Copyright Grama Nicolae 2019
#ifndef VECTORS2D_H
#define VECTORS2D_H

#include "./points.h"
#include <math.h>

template <typename coordinate>
class Vector2D : public Point {
   public:
    Vector2D();
    Vector2D(coordinate x, coordinate y);
    ~Vector2D();
    Vector2D add(Vector2D v);
    Vector2D substract(Vector2D v);
    Vector2D multiply(coordinate scale);
    Vector2D divide(coordinate scale);
    coordinate distance(Point) = delete;
    coordinate distance(Vector2D v);
    coordinate magnitude();
    Vector2D normalize();
    // Vector2D limit(coordinate max); - limit the magnitude of a vector
    coordinate heading();
    // coordinate angleWith(Vector2D v);-find the angle between two vectors(rads)
    coordinate dot(Vector2D v);    // dot product
    Vector2D cross(Vector2D v);  // cross product
};

#endif