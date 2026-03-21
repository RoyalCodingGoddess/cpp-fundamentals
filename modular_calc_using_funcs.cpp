#include <iostream>
#include <iomanip>
using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int choice;
    double num1, num2, result;
    bool running = true;

    while (running) {
        cout << "Menu:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Quit" << endl;
        cout << "Select an option: ";
        cin >> choice;

        if (choice == 5) {
            running = false;
            continue;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            switch (choice) {
                case 1: result = add(num1, num2); break;
                case 2: result = subtract(num1, num2); break;
                case 3: result = multiply(num1, num2); break;
                case 4: 
                    if (num2 == 0) {
                        cout << "Error: division by zero!" << endl;
                        continue;
                    }
                    result = divide(num1, num2); 
                    break;
            }
            cout << "Result: " << fixed << setprecision(2) << result << endl;
        } else {
            cout << "Invalid!" << endl;
        }
    }
    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}
//easier to read when functions are separated,
//easier to debug and highlight mistakes,
//easier to reuse or maintain

