#pragma once
#include "Shape.h"

class Square : public Shape {
private:
    double side;

public:
    Square(double s);
    double calculateArea() const override;
    const char* getName() const override;
};