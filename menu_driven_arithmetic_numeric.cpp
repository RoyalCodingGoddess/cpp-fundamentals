#include <iostream>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    bool running = true;

    while (running) {
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Quit" << endl;
        cout << "Select an option (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
            case 2:
            case 3:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                if (choice == 1) result = num1 + num2;
                else if (choice == 2) result = num1 - num2;
                else result = num1 * num2;

                cout << "Result: " << result << endl;
                break;

            case 4:
                cout << "Goodbye!" << endl;
                running = false;
                break;

            default:
                cout << "Invalid option! Please select between 1 and 4." << endl;
        }
    }

    return 0;
}

