// Copyright Grama Nicolae 2019
#include "./PVector.h"

PVector::PVector() {
    this->x = double(0);
    this->y = double(0);
    this->z = double(0);
}

PVector::PVector(double x, double y) {
    this->x = x;
    this->y = y;
    this->z = double(0);
}

PVector::PVector(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

PVector::~PVector() {}

PVector PVector::add(PVector v) {
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
    return *this;
}

PVector PVector::substract(PVector v) {
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
    return *this;
}

PVector PVector::multiply(double scale) {
    this->x *= scale;
    this->y *= scale;
    this->z *= scale;
    return *this;
}

PVector PVector::divide(double scale) {
    if(scale!=0) { 
        this->x /= scale;
        this->y /= scale;
        this->z /= scale;
    }
    return *this;
}

double PVector::magnitude() { return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2)) ; }

double PVector::dot(PVector v) {
    return this->magnitude() * v.magnitude();  // * cos angle this, v
}

double PVector::distance(PVector v) {
    return 0;
}