#include "Triangle.h"

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::calculateArea() const {
    return 0.5 * base * height;
}

const char* Triangle::getName() const {
    return "Triangle";
}