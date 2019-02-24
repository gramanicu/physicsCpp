// Copyright Grama Nicolae 2019
#include "./Point.h"

Point::Point() {
    this->x = double(0);
    this->y = double(0);
    this->z = double(0);
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
    this->z = double(0);
}

Point::Point(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

Point::~Point() {}

void Point::setX(double x) { this->x = x; }

void Point::setY(double y) { this->y = y; }

void Point::setZ(double z) { this->z = z; }

void Point::setXY(double x, double y) {
    this->x = x;
    this->y = y;
}

void Point::setXYZ(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

double Point::getX() { return x; }

double Point::getY() { return y; }

double Point::getZ() { return z; }

double Point::distance(Point p) {
    return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2) +
                pow(p.z - this->z, 2));
}