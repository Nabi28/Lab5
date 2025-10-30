#pragma once
#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r);
    double calculateArea() const override;
    const char* getName() const override;
};