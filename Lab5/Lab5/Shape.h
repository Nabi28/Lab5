#pragma once

class Shape {
public:
    virtual ~Shape() = default;
    virtual double calculateArea() const = 0;
    virtual const char* getName() const = 0;
};