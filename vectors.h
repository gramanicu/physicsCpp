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
        double distance(Point p);
};

class Vector: public Point {
    public:
        Vector();
        Vector(double x, double y);
        ~Vector();
        Vector add(Vector v);
        Vector substract(Vector v);
        Vector multiply(double scale);
        Vector divide(double scale);
        double magnitude();
        Vector normalize();
        // Vector limit(double max); - limit the magnitude of a vector
        double heading();
        // double angleWith(Vector v); - find the angle between two vectors (in radians)
        double dot(Vector v); // dot product
        Vector cross(Vector v); // cross product
        
};

#endif