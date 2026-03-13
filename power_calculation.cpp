#include <iostream>
using namespace std;


int main() {
    int n, m;
    int result = 1;


    cout << endl;
    cout << "Enter base (n): ";
    cin >> n;
    cout << "Enter exponent (m): ";
    cin >> m;


    //handles negative exponents
    if (m < 0) {
        cout << "Doesn't support negative exponents." << endl;
        return 0;
    }
    for (int i = 0; i < m; ++i) {
        result *= n;
    }
    cout << n << " raised to the power of " << m << " is: " << result << endl;
    return 0;
}
