#include <iostream>
#include <memory>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

int main()
{
    std::vector<std::unique_ptr<Shape>> shapes;

    shapes.push_back(std::make_unique<Circle>(5.0));
    shapes.push_back(std::make_unique<Square>(4.0));
    shapes.push_back(std::make_unique<Triangle>(6.0, 8.0));

    for (const auto& shape : shapes) {
        std::cout << shape->getName() << " area: " << shape->calculateArea() << std::endl;
    }

    return 0;
}