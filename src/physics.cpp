// Copyright Grama Nicolae 2019
#include <iostream>
#include "../include/Physics.h"
/*
This tests multiple ways of initialising vectors, 
and then delete the ones that need deletion
Should print:
12 10
13 11
20 21
31 24
*/
void testInitialization() {
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
    std::cout << v3->getX() << " " << v3->getY() << std::endl << std::endl;
    delete v3;
}

/* 
Test if all functions that are making operation
between the vector and a number are correct
Should print:
0 5 0
0 2.5 0
0 3.5 0
-1 3.5 0
-0.27... 0.96...
1
0 0 -1

*/
void testSelfCalculation() {
    PVector *v = new PVector(0,1);
    v->multiply(5);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->divide(2);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->add(PVector(0,1));
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->substract(PVector(1,0));
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->normalize();
    std::cout << v->getX() << " " << v->getY() << std::endl;
    std::cout << v->magnitude() << "\n" << "\n";
    delete v;
}

/* 
This test if the heading functions are working properly, 
indiferent if the vector is 2D or 3D, and the angle between
vectors are correctly calculated
Should print something like:
90
0
45
0
90
0
77
6.66... = 6.(6)
*/
void testAngleFunctions() {
    PVector *v1 = new PVector(0,1);
    PVector *v2 = new PVector(1,0);
    PVector *v3 = new PVector(1,1);
    std::cout << v1->headingDegXY() << "\n";
    std::cout << v2->headingDegXY() << "\n";
    std::cout << v3->headingDegXY() << "\n";
    std::cout << v3->headingDegXZ() << "\n";
    std::cout << v1->angleDegWith(*v2) << "\n";
    std::cout << v1->angleDegWith(*v1) << "\n";

    PVector *v4 = new PVector(5,24);
    PVector *v5 = new PVector(1,3);
    std::cout << v4->dot(*v5) << "\n";
    std::cout << v4->angleDegWith(*v5) << "\n" << "\n";

    delete v1;
    delete v2;
    delete v3;
    delete v4;
    delete v5;
}

/* 
Test the result of the cross product function
Should print:
0 0 -1
-3 6 -3
0 0 12
16 4 8
*/
void testCrossFunction() {
    PVector *v1 = new PVector(0,1,0);
    PVector *v2 = new PVector(1,0,0);
    PVector v3 = v1->cross(*v2);
    std::cout << v3.getX() << " " << v3.getY() << " " << v3.getZ() << std::endl;

    v1 = new PVector(2,3,4);
    v2 = new PVector(5,6,7);
    v3 = v1->cross(*v2);
    std::cout << v3.getX() << " " << v3.getY() << " " << v3.getZ() << std::endl;

    v1 = new PVector(3,0,0);
    v2 = new PVector(0,4,0);
    v3 = v1->cross(*v2);
    std::cout << v3.getX() << " " << v3.getY() << " " << v3.getZ() << std::endl;

    v1 = new PVector(-1,-2,3);
    v2 = new PVector(4,0,-8);
    v3 = v1->cross(*v2);
    std::cout << v3.getX() << " " << v3.getY() << " " << v3.getZ() << std::endl << std::endl;

    delete v1;
    delete v2;

}

/*
This function is testing if the vectors have their magnitude
limited. It should print:
1.5 0 0
1.5 0 0
1.5 0 0
3 0 0
150 0 0
151 1 1
7550 50 50
1.49993 0.00993334 0.00993334
1.49993 0.00993334 0.00993334
1.5 1.5
*/
void testLimitation() {
    PVector *v = new PVector(3,0,0);
    v->limit(1.5);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->multiply(2);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;

    v->limit(NOVLIMIT);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->multiply(2);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->multiply(50);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;

    v->add(PVector(1,1,1));
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->multiply(50);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;

    v->limit(1.5);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    v->multiply(2);
    std::cout << v->getX() << " " << v->getY() << " " << v->getZ() << std::endl;
    std::cout << v->magnitude() << " " << v->getLimit() << std::endl << std::endl;
}

int main() {
    testInitialization();
    testAngleFunctions();
    testSelfCalculation();
    testCrossFunction();
    testLimitation();

    return 0;
}
