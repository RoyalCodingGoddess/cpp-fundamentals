#include <iostream>
#include <iomanip> //for setw, fixed, setprecision
using namespace std;

int main() {
    int x = 5;
    double xx = 123.45678;

cout << left << setw(15) << "Description" 
<< right << setw(10) << "Integer" 
<< setw(15) << "Float (2 dec)" 
<< setw(15) << "Float (5 dec)" << endl;
    
cout << string(55, '-') << endl; //table line

cout << left << setw(15) << "Values" 
<< right << setw(10) << x 
<< fixed << setprecision(2) << setw(15) << xx 
<< fixed << setprecision(5) << setw(15) << xx 
<< endl;

return 0; 
}



