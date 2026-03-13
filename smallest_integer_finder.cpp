#include <iostream>
using namespace std;


int main() {
    int num, smallest;
    cout << "Enter integer 1: ";
    cin >> smallest;


    for (int i = 2; i <= 5; ++i) {
        cout << "Enter integer " << i << ": ";
        cin >> num;


        if (num < smallest) {
            smallest = num;
        }
    }
    cout << "The smallest value is: " << smallest << endl;
    return 0;
}
