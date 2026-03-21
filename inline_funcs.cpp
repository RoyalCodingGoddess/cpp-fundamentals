#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

//Area of Circle
inline double getCircleArea(double radius) {
    return PI * radius * radius;
}

// Function reusing the inline function for Cylinder Volume
double getCylinderVolume(double radius, double height) {
    return getCircleArea(radius) * height;
}

int main() {
    cout << fixed << setprecision(2);

    double r = 5.0;
    double h = 10.0;

    cout << "Radius: " << r << ", Height: " << h << endl;
    cout << "Circle Area: " << getCircleArea(r) << endl;
    cout << "Cylinder Volume: " << getCylinderVolume(r, h) << endl;

    return 0;
//to replace with its code directly at the call 
//site instead of making a normal function call.
}
