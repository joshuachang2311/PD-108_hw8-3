//
// Created by Joshua2018 on 2019/12/13.
//

#include "vector.h"

Vector::Vector() {
    x_ = 0;
    y_ = 0;
}

Vector::Vector(int x, int y) {
    x_ = x;
    y_ = y;
}

Vector::Vector(Point startingPoint, Point endingPoint) {
    x_ = endingPoint.x_ - startingPoint.x_;
    y_ = endingPoint.y_ - startingPoint.y_;
}

Vector Vector::operator+(Vector rhs) {
    return {this->x_ + rhs.x_, this->y_ + rhs.y_};
}

Vector Vector::operator-() {
    return {-x_, -y_};
}

Vector Vector::operator-(Vector rhs) {
    return {this->x_ - rhs.x_, this->y_ - rhs.y_};
}

int Vector::operator*(Vector rhs) {
    return this->x_ * rhs.x_ + this->y_ * rhs.y_;
}
bool Vector::operator==(Vector rhs) {
    return this->x_ == rhs.x_ && this->y_ == rhs.y_;
}

bool Vector::operator!=(Vector rhs) {
    return !(*this == rhs);
}

bool Vector::IsZero() {
    return x_ == 0 && y_ == 0;
}
