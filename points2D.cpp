// Copyright Grama Nicolae 2019
#include "./points2D.h"

#define C coordinate
#define Template template <typename C>

Template
Point<C>::Point() {
    this->x = C(0);
    this->y = C(0);
}

Template
Point<C>::Point(C x, C y) {
    this->x = x;
    this->y = y;
}

Template
Point<C>::~Point() {}

Template
void Point<C>::setX(C x) { this->x = x; }

Template
void Point<C>::setY(C y) { this->y = y; }

Template
void Point<C>::setXY(C x, C y) {
    this->x = x;
    this->y = y;
}

Template
C Point<C>::getX() { return x; }

Template
C Point<C>::getY() { return y; }

Template
C Point<C>::distance(Point p) {
    return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
}