//
// Created by Joshua2018 on 2019/12/13.
//

#include "vector-utils.h"

bool VectorUtils::IsParallel(Vector vector1, Vector vector2) {
    if (vector1.IsZero() || vector2.IsZero()) {
        return true;
    } else if (vector1.x_ == 0 && vector2.x_ == 0) {
        return true;
    } else if (vector1.y_ == 0 && vector2.y_ == 0) {
        return true;
    }

    int lhs = vector1.x_ * vector2.y_;
    int rhs = vector2.x_ * vector1.y_;

    if (lhs == rhs) {
        return lhs != 0;
    } else {
        return false;
    }
}