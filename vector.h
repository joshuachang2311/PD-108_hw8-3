//
// Created by Joshua2018 on 2019/12/13.
//

#ifndef HW8_3_VECTOR__VECTOR_H_
#define HW8_3_VECTOR__VECTOR_H_

#include "point.h"

class Vector {
public:
    Vector();
    Vector(int x, int y);
    Vector(Point startingPoint, Point endingPoint);

    Vector operator+(Vector rhs);
    Vector operator-();
    Vector operator-(Vector rhs);
    int operator*(Vector rhs);
    bool operator==(Vector rhs);
    bool operator!=(Vector rhs);

    bool IsZero();

    int x_;
    int y_;
};

#endif //HW8_3_VECTOR__VECTOR_H_
