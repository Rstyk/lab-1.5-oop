#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pair {
private:
    double first;
    double second;

public:
    void setFirst(double f) { first = f; };
    double getFirst() const { return first; };

    void setSecond(double s) { second = s; };
    double getSecond() const { return second; };

    bool Init(double f, double s);
    void Read();
    void Display() const;
    string toString();

    friend double getProduct(Pair t);
};
