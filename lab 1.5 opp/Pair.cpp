#include "Pair.h"
#include <iostream>

using namespace std;

bool Pair::Init(double a, double b)
{
    setFirst(a);
    setSecond(b);
    return true;
}

void Pair::Read()
{
    double a, b;
    do {
        cout << "Enter the pair of numbers" << endl;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
    } while (!Init(a, b));
}

void Pair::Display() const
{
    cout << endl;
    cout << "First number = " << getFirst() << endl;
    cout << "Second number = " << getSecond() << endl;
    cout << "Pair: (" << first << ", " << second << ")" << endl;
    cout << endl;
}

string Pair::toString()
{
    stringstream sout;
    sout << first << second;
    return sout.str();
}

double getProduct(Pair t) {
    return t.first * t.second;
}
