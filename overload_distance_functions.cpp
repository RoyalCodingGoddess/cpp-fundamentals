#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

double calcD(int x1, int y1, int x2, int y2) {
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

double calcD(double x1, double y1, double x2, double y2) {
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}


int main() {

    int x1 = 0, y1 = 0, x2 = 3, y2 = 4;
    cout << "Distance (int): " << calcD(x1, y1, x2, y2) << endl;

    double x3 = 1.5, y3 = 2.5, x4 = 4.5, y4 = 6.5;
    cout << "Distance (double): " << fixed << setprecision(2)
<< calcD(x3, y3, x4, y4) << endl;

    return 0;
}

