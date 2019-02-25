// Copyright Grama Nicolae 2019
#ifndef PVECTOR_H
#define PVECTOR_H

#include <math.h>
#include "./Point.h"

#define NOVLIMIT -1

class PVector : public Point {
    private:
        double maxMagnitude = -1;
        PVector divideNoLimit(double scale);
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
        double getLimit();
        PVector normalize();
        PVector limit();
        PVector limit(double max);
        double headingXY();
        double headingXZ();
        double headingYZ();
        double headingDegXY();
        double headingDegXZ();
        double headingDegYZ();
        double angleWith(PVector v);
        double angleDegWith(PVector v);
        double dot(PVector v);
        PVector cross(PVector v);
};

#endif