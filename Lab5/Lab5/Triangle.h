#pragma once
#include "Shape.h"

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h);
    double calculateArea() const override;
    const char* getName() const override;
};