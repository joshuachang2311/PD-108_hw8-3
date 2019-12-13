#include <bits/stdc++.h>

#include "triangle.h"

constexpr int INVALID_TRIANGLE = -1;

int main() {
    int randomSeed, maxX, maxY;
    Point point1, point2, point3;
    std::cin >> randomSeed >> maxX >> maxY;
    maxX += 1;
    maxY += 1;
    srand(randomSeed);
    int x = rand() % maxX;
    int y = rand() % maxY;
    point1 = Point(x, y);
    x = rand() % maxX;
    y = rand() % maxY;
    point2 = Point(x, y);
    x = rand() % maxX;
    y = rand() % maxY;
    point3 = Point(x, y);

    try {
        Triangle triangle = Triangle(point1, point2, point3);
        std::cout << triangle.GetType() << ',' << triangle.GetArea();
    } catch (std::runtime_error &runtimeError) {
        std::cout << INVALID_TRIANGLE;
    }

    return 0;
}
