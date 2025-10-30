#include "Circle.h"
#include <cmath>

Circle::Circle(double r) : radius(r) {}

double Circle::calculateArea() const {
    return 3.14159265359 * radius * radius;
}

const char* Circle::getName() const {
    return "Circle";
}