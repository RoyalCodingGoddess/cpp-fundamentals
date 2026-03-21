#include <iostream>
using namespace std;

//Pass by Reference
void swapByRef(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

//Pass by Pointer
void swapByPtr(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char c1 = 'A', c2 = 'B';
    
    //Reference
    cout << "Before Ref Swap: " << c1 << ", " << c2 << endl;
    swapByRef(c1, c2);
    cout << "After Ref Swap:  " << c1 << ", " << c2 << endl;

    //Pointer
    char p1 = 'X', p2 = 'Y';
    cout << "\n" <<endl;
    cout << "Before Ptr Swap: " << p1 << ", " << p2 << endl;
    swapByPtr(&p1, &p2); 
    cout << "After Ptr Swap:  " << p1 << ", " << p2 << endl;

    return 0;
}

