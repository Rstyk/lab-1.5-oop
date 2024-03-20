#pragma once
#include <iostream>
#include <string>
#include "Pair.h"

class Rectangle {
private:
    Pair sides;

public:

    void setSides(double a, double b) { sides.setFirst(a); sides.setSecond(b); };
    Pair getSides() const { return sides; };

    void Init(double a, double b);
    void Read();
    void Display() const;

    double getPerumetr() const;
    double getArea() const;
};
