// Copyright Grama Nicolae 2019
#include "./points3D.h"

#define C coordinate
#define Template template <typename C>

Template
Point3D<C>::Point3D() {
    this->x = C(0);
    this->y = C(0);
}

Template
Point3D<C>::Point3D(C x, C y, C z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Template
Point3D<C>::~Point3D() {}

Template
void Point3D<C>::setX(C x) { this->x = x; }

Template
void Point3D<C>::setY(C y) { this->y = y; }

Template
void Point3D<C>::setZ(C z) { this->z = z; }

Template
void Point3D<C>::setXYZ(C x, C y, C z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Template
C Point3D<C>::getX() { return x; }

Template
C Point3D<C>::getY() { return y; }

Template
C Point3D<C>::getZ() { return z; }

Template
C Point3D<C>::distance(Point3D p) {
    return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2) + pow(p.z - this->z, 2));
}