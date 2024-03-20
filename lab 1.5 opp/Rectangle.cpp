#include "Rectangle.h"
#include <cmath>
#include <iostream>

using namespace std;

void Rectangle::Init(double a, double b) {
    setSides(a, b);
}

void Rectangle::Read() {
    cout << "Katety:" << endl;
    sides.Read();
}

void Rectangle::Display() const {
    cout << "Your katety: ";
    sides.Display();
    cout << endl;
}

double Rectangle::getPerumetr() const {
    double a = sides.getFirst();
    double b = sides.getSecond();
    return a + a + b + b;
}

double Rectangle::getArea() const {
    double a = sides.getFirst();
    double b = sides.getSecond();
    return a * b;
}

