// Copyright Grama Nicolae 2019
#ifndef VECTORS_H
#define VECTORS_H

#include "./points.h"
#include <math.h>

class Vector : public Point {
   public:
    Vector();
    Vector(double x, double y);
    ~Vector();
    Vector add(Vector v);
    Vector substract(Vector v);
    Vector multiply(double scale);
    Vector divide(double scale);
    double distance(Point) = delete;
    double distance(Vector v);
    double magnitude();
    Vector normalize();
    // Vector limit(double max); - limit the magnitude of a vector
    double heading();
    // double angleWith(Vector v);-find the angle between two vectors(rads)
    double dot(Vector v);    // dot product
    Vector cross(Vector v);  // cross product
};

#endif