// Copyright Grama Nicolae 2019
#include "./vectors.h"

Vector::Vector() {
    this->x = double(0);
    this->y = double(0);
}

Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector::~Vector() {}

Vector Vector::add(Vector v) {
    this->x += v.x;
    this->y += v.y;
    return *this;
}

Vector Vector::substract(Vector v) {
    this->x -= v.x;
    this->y -= v.y;
    return *this;
}

Vector Vector::multiply(double scale) {
    this->x *= scale;
    this->y *= scale;
    return *this;
}

Vector Vector::divide(double scale) {
    this->x /= scale;
    this->y /= scale;
    return *this;
}

double Vector::magnitude() { return sqrt(pow(this->x, 2) + pow(this->y, 2)); }

double Vector::dot(Vector v) {
    return this->magnitude() * v.magnitude();  // * cos angle this, v
}

double Vector::distance(Vector v) {
    return 0;
}