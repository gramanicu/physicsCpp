// Copyright Grama Nicolae 2019
#include "./vectors3D.h"

#define C coordinate
#define Template template <typename C>

Template
Vector3D<C>::Vector3D() {
    this->x = C(0);
    this->y = C(0);
    this->z = C(0);
}

Template
Vector3D<C>::Vector3D(C x, C y, C z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Template
Vector3D<C>::~Vector3D() {}

Template
Vector3D<C> Vector3D<C>::add(Vector3D v) {
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
    return *this;
}

Template
Vector3D<C> Vector3D<C>::substract(Vector3D v) {
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
    return *this;
}

Template
Vector3D<C> Vector3D<C>::multiply(C scale) {
    this->x *= scale;
    this->y *= scale;
    this->z *= scale;
    return *this;
}

Template
Vector3D<C> Vector3D<C>::divide(C scale) {
    this->x /= scale;
    this->y /= scale;
    this->z /= scale;
    return *this;
}

Template
C Vector3D<C>::magnitude() { return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2))) ; }

Template
C Vector3D<C>::dot(Vector3D v) {
    return this->magnitude() * v.magnitude();  // * cos angle this, v
}

Template
C Vector3D<C>::distance(Vector3D v) {
    return 0;
}