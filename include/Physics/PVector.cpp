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
    this->x = this->x + v.x;
    this->y = this->y + v.y;
    this->z = this->z + v.z;
    this->limit();
    return *this;
}

PVector PVector::substract(PVector v) {
    this->x = this->x - v.x;
    this->y = this->y - v.y;
    this->z = this->z - v.z;
    this->limit();
    return *this;
}

PVector PVector::multiply(double scale) {
    this->x = this->x * scale;
    this->y = this->y * scale;
    this->z = this->z * scale;
    this->limit();
    return *this;
}

PVector PVector::divide(double scale) {
    if (scale != 0) {
        this->x = this->x / scale;
        this->y = this->y / scale;
        this->z = this->z / scale;
    }
    this->limit();
    return *this;
}

PVector PVector::divideNoLimit(double scale) {
    PVector v;
    if (scale != 0) {
        v.setX(this->x / scale);
        v.setY(this->y / scale);
        v.setZ(this->z / scale);
    }
    return v;
}

double PVector::magnitude() {
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

double PVector::dot(PVector v) {
    return this->x * v.x + this->y * v.y + this->z * v.z;
}

double PVector::distance(PVector v) {
    return sqrt(pow(v.x - this->x, 2) + pow(v.y - this->y, 2) + pow(v.z - this->z, 2));
}

PVector PVector::normalize() { 
    double magnitude = this->magnitude();
    if(magnitude != double(0)) {
        this->divide(magnitude);
    }
    return *this; 
}

double PVector::headingXY() {
    if(!this->x && !this->y) { return 0;}
    return atan(this->y / this ->x);
}

double PVector::headingXZ() {
    if(!this->x && !this->z) { return 0;}
    return atan(this->z / this ->x);
}

double PVector::headingYZ() {
    if(!this->y && !this->z) { return 0;}
    return atan(this->z / this ->y);
}

double PVector::headingDegXY() {
    if(!this->x && !this->y) { return 0;}
    return atan(this->y / this ->x) * 180 / M_PI;
}

double PVector::headingDegXZ() {
    if(!this->x && !this->z) { return 0;}
    return atan(this->z / this ->x) * 180 / M_PI;
}

double PVector::headingDegYZ() {
    if(!this->y && !this->z) { return 0;}
    return atan(this->z / this ->y) * 180 / M_PI;
}

double PVector::angleWith(PVector p) {
    return acos(this->dot(p) / (this->magnitude() * p.magnitude()));
}

double PVector::angleDegWith(PVector p) {
    return acos(this->dot(p) / (this->magnitude() * p.magnitude())) * 180 / M_PI;
}

PVector PVector::cross(PVector p) {
    PVector result;
    result.setX(this->y * p.z - this->z * p.y);
    result.setY(this->z * p.x - this->x * p.z);
    result.setZ(this->x * p.y - this->y * p.x);
    return result;
}

PVector PVector::limit() {
    if(this->maxMagnitude!=-1) {
        PVector aux = *this;
        double toDivideWith = (aux.divideNoLimit(aux.maxMagnitude)).magnitude();
        this->divideNoLimit(toDivideWith);
    }
    return *this;
}

PVector PVector::limit(double limit) {
    this->maxMagnitude = limit;
    this->limit();
    return *this;
}

double PVector::getLimit() {
    return this->maxMagnitude;
}

PVector PVector::add(PVector v1, PVector v2) {
    PVector res;
    res.setX(v1.getX() + v2.getX());
    res.setX(v1.getX() + v2.getX());
    res.setX(v1.getX() + v2.getX());
    return res;
}

void PVector::add(PVector v1, PVector v2, PVector res) {
    res.setX(v1.getX() + v2.getX());
    res.setX(v1.getX() + v2.getX());
    res.setX(v1.getX() + v2.getX());
}

PVector PVector::substract(PVector v1, PVector v2) {
    PVector res;
    res.setX(v1.getX() + v2.getX());
    res.setX(v1.getX() + v2.getX());
    res.setX(v1.getX() + v2.getX());
    return res;
}

void PVector::substract(PVector v1, PVector v2, PVector res) {
    res.setX(v1.getX() - v2.getX());
    res.setX(v1.getX() - v2.getX());
    res.setX(v1.getX() - v2.getX());
}

PVector PVector::multiply(PVector v, double scale) {
    PVector res;
    res.setXYZ(v.x * scale, v.y * scale, v.z * scale);
    return res;
}

PVector PVector::divide(PVector v, double scale) {
    PVector res;
    if (scale != 0) {
        res.setXYZ(v.x * scale, v.y * scale, v.z * scale);
    }
    return res;
}


PVector PVector::cross(PVector v1, PVector v2) {
    PVector result;
    result.setX(v1.y * v2.z - v1.z * v2.y);
    result.setY(v1.z * v2.x - v1.x * v2.z);
    result.setZ(v1.x * v2.y - v1.y * v2.x);
    return result;
}


void PVector::cross(PVector v1, PVector v2, PVector res) {
    res.setX(v1.y * v2.z - v1.z * v2.y);
    res.setY(v1.z * v2.x - v1.x * v2.z);
    res.setZ(v1.x * v2.y - v1.y * v2.x);
}