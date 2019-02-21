// Copyright Grama Nicolae 2019
#include <iostream>
#include "./vectors.h"

void testFunction() {
    Vector *v = new Vector();
    v->setX(12);
    v->setY(10);
    std::cout << v->getX() << " " << v->getY() << std::endl;
    Vector v1;
    v1.setX(13);
    v1.setY(11);
    std::cout << v1.getX() << " " << v1.getY() << std::endl;
    Vector v2;
    v2.setXY(20, 21);
    std::cout << v2.getX() << " " << v2.getY() << std::endl;
    Vector *v3 = new Vector(31, 24);
    std::cout << v3->getX() << " " << v3->getY() << std::endl;
}

int main() { 
    testFunction();
    return 0; 
}
