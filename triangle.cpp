//
// Created by Joshua2018 on 2019/12/13.
//

#include "triangle.h"

Triangle::Triangle() {
    point_1_ = Point();
    point_2_ = Point();
    point_3_ = Point();

    SetVectors();
}

Triangle::Triangle(Point point1, Point point2, Point point3) {
    point_1_ = point1;
    point_2_ = point2;
    point_3_ = point3;

    SetVectors();
}

double Triangle::GetArea() {
    int x1 = point_1_.x_;
    int y1 = point_1_.y_;
    int x2 = point_2_.x_;
    int y2 = point_2_.y_;
    int x3 = point_3_.x_;
    int y3 = point_3_.y_;
    return (double) (abs((x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1))) / 2.0;
}

int Triangle::GetType() {
    int crossProduct1 = vector_2_ * -vector_3_;
    int crossProduct2 = vector_3_ * -vector_1_;
    int crossProduct3 = vector_1_ * -vector_2_;
    int crossProduct = std::min(crossProduct1, std::min(crossProduct2, crossProduct3));

    if (crossProduct > 0) {
        return ACUTE_ANGLE;
    } else if (crossProduct == 0) {
        return RIGHT_ANGLE;
    } else {
        return OBTUSE_ANGLE;
    }
}

void Triangle::SetVectors() {
    vector_1_ = Vector(point_2_, point_3_);
    vector_2_ = Vector(point_3_, point_1_);
    vector_3_ = Vector(point_1_, point_2_);

    if (VectorUtils::IsParallel(vector_1_, vector_2_)) {
        throw std::runtime_error("Invalid triangle");
    }
}
