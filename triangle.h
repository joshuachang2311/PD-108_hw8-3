//
// Created by Joshua2018 on 2019/12/13.
//

#ifndef HW8_3_VECTOR__TRIANGLE_H_
#define HW8_3_VECTOR__TRIANGLE_H_

#include <cmath>
#include <algorithm>
#include <stdexcept>

#include "vector-utils.h"

class Triangle {
public:
    Triangle();
    Triangle(Point point1, Point point2, Point point3);

    double GetArea();
    int GetType();

private:
    void SetVectors();

    static const int ACUTE_ANGLE = 0;
    static const int RIGHT_ANGLE = 1;
    static const int OBTUSE_ANGLE = 2;

    Point point_1_;
    Point point_2_;
    Point point_3_;
    Vector vector_1_;
    Vector vector_2_;
    Vector vector_3_;
};

#endif //HW8_3_VECTOR__TRIANGLE_H_
