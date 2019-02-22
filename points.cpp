// Copyright Grama Nicolae 2019
#include "./points.h"

Point::Point() {
    this->x = double(0);
    this->y = double(0);
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::~Point() {}

void Point::setX(double x) { this->x = x; }

void Point::setY(double y) { this->y = y; }

void Point::setXY(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::getX() { return x; }

double Point::getY() { return y; }

double Point::distance(Point p) {
    return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
}