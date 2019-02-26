# Physics C++

This is a C++ project that focuses on implementing vectors and points, used in physics. It is based on a [processing tutorial](https://processing.org/tutorials/pvector/) by Daniel Shiffman.

## Point
Implementation of the `Point` Class, on wich the `Vector` Class is based. It has 3 variables of type `double`, x, y, z, which represent a position. 
Most of it's methods are getters and setters, except from the `distance` method.

#### Point.h
```c
static double distance(Point p1, Point p2)
```

#### Point.cpp
```c
double Point::distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) +
                pow(p2.z - p1.z, 2));
}
```

To calculate the distance it uses the `Distance Formula`, which is derived from the `Pythagorean Theorem`.

![alt text](./images/distanceFormula.png "Distance Formula")

Even if the point had 3 dimensions defined, it can work using only two, the x & y withouth problem. Thats why one of the initializers has only 2 arguments.


## PVector


© 2019 Grama Nicolae