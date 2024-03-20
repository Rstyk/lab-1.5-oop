#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle storony;

    storony.Read();
    storony.Display();
    cout << "P = ";
    cout << storony.getPerumetr() << endl;
    cout << "S = ";
    cout << storony.getArea() << endl;
}

