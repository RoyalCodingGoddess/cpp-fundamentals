#include <iostream>
using namespace std;

double calcVol(double length, double width = 1.0, double height = 1.0);

int main() {

    cout << "Volume (5, 4, 3): " << calcVol(5.0, 4.0, 3.0) << endl;

    // Case 2: Height uses default (1.0)
    cout << "Volume (5, 4): " << calcVol(5.0, 4.0) << endl;

    // Case 3: Width and Height use defaults (1.0)
    cout << "Volume (5): " << calcVol(5.0) << endl;

    return 0;
}

double calcVol(double length, double width, double height) {
    return length * width * height;
    // Default arguments should be specified only once,
    //typically in the function prototype.

    //All parameters that take default values must appear to 
    //the right of those that do not.
    //Otherwise, the compiler issues an error.
}
