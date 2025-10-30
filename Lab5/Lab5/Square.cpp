#include "Square.h"

Square::Square(double s) : side(s) {}

double Square::calculateArea() const {
    return side * side;
}

const char* Square::getName() const {
    return "Square";
}