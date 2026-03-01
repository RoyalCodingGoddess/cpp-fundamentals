#include <iostream>
#include <iomanip> //for setw, fixed, setprecision
using namespace std;

template <class T, class U>
void printvals( T x, U xx) {
    
cout << "Sum of " << x << " and " << xx << " is " << (x + xx) << endl;

cout << "Integer division is: " 
 << (static_cast<int>(x) / static_cast<int>(xx))
 // w/o this, the value would be in deimal. 
 //to attain only an integer, we need to cast static_cast
 << endl;
}

int main() {
int x;
double xx;

cout << "Enter for x: ";
cin >> x;

cout << "Value of xx: "; 
cin >> xx; 
printvals( x, xx);

return 0; 
}
