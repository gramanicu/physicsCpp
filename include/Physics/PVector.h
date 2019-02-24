// Copyright Grama Nicolae 2019
#ifndef PVECTOR_H
#define PVECTORS_H

#include <math.h>
#include "./Point.h"

class PVector : public Point {
   public:
    PVector();
    PVector(double x, double y);
    PVector(double x, double y, double z);
    ~PVector();
    PVector add(PVector v);
    PVector substract(PVector v);
    PVector multiply(double scale);
    PVector divide(double scale);
    double distance(Point) = delete;
    double distance(PVector v);
    double magnitude();
    PVector normalize();
    // PVector limit(double max); - limit the magnitude of a vector
    double headingXY();
    double headingXZ();
    double headingYZ();
    double headingDegXY();
    double headingDegXZ();
    double headingDegYZ();
    double angleWith(PVector v);
    double angleDegWith(PVector v);
    double dot(PVector v);     // dot product
    PVector cross(PVector v);  // cross product
};

#endif