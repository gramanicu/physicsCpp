// Copyright Grama Nicolae 2019
#ifndef VECTORS_H
#define VECTORS_H

class Point {
    protected:
        double x;
        double y;
    public:
        Point();
        Point(double x, double y);
        ~Point();
        void setX(double x);
        void setY(double y);
        void setXY(double x, double y);
        double getX();
        double getY();
};

class Vector: public Point {
    public:
        Vector();
        Vector(double x, double y);
        ~Vector();
};

#endif