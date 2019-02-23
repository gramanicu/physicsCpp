// Copyright Grama Nicolae 2019
#include "./vectors2D.h"

#define C coordinate
#define Template template <typename C>

Template
Vector2D<C>::Vector2D() {
    this->x = C(0);
    this->y = C(0);
}

Template
Vector2D<C>::Vector2D(C x, C y) {
    this->x = x;
    this->y = y;
}

Template
Vector2D<C>::~Vector2D() {}

Template
Vector2D<C> Vector2D<C>::add(Vector2D v) {
    this->x += v.x;
    this->y += v.y;
    return *this;
}

Template
Vector2D<C> Vector2D<C>::substract(Vector2D v) {
    this->x -= v.x;
    this->y -= v.y;
    return *this;
}

Template
Vector2D<C> Vector2D<C>::multiply(C scale) {
    this->x *= scale;
    this->y *= scale;
    return *this;
}

Template
Vector2D<C> Vector2D<C>::divide(C scale) {
    this->x /= scale;
    this->y /= scale;
    return *this;
}

Template
C Vector2D<C>::magnitude() { return sqrt(pow(this->x, 2) + pow(this->y, 2)); }

Template
C Vector2D<C>::dot(Vector2D v) {
    return this->magnitude() * v.magnitude();  // * cos angle this, v
}

Template
C Vector2D<C>::distance(Vector2D v) {
    return 0;
}