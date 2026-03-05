
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double result = 10.0 / 3.0;

    cout << "Default: " << result << endl;
    //this uses 6 sig. digits total 

    cout << "Fixed: " << fixed << result << endl;
    //usually works w setprecision; forces floats to use decimals; 6 dec. places
    
    cout << "Precision(2): " << setprecision(2) << result << endl;
    //limits the decimal place to 2 places after the point

    cout << "Precision(8): " << setprecision(8) << result << endl;
    //limits the decimal place to 8 places after the point

    return 0;
}
