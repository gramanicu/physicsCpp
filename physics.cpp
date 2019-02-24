// Copyright Grama Nicolae 2019
#include <iostream>
#include "./physics.h"

void testFunction() {
    PVector *v = new PVector();
    v->setX(12);
    v->setY(10);
    std::cout << v->getX() << " " << v->getY() << std::endl;
    delete v;
    PVector v1;
    v1.setX(13);
    v1.setY(11);
    std::cout << v1.getX() << " " << v1.getY() << std::endl;
    PVector v2;
    v2.setXY(20, 21);
    std::cout << v2.getX() << " " << v2.getY() << std::endl;
    PVector *v3 = new PVector(31, 24);
    std::cout << v3->getX() << " " << v3->getY() << std::endl;
    delete v3;
}

int main() {
    testFunction();
    return 0;
}
