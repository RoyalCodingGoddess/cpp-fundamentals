#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double num;
    double sum = 0.0;


    for (int i = 1; i <= 5; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << fixed << setprecision(2);
    cout << "The total sum is: " << sum << endl;
    return 0;
}
