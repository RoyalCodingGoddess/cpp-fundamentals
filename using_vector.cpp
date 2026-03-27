#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//Function Prototype for Task 5
void printReverse(const vector<int>& data);

int main() {
    //task 1
    int count;
    vector<int> numbers;

   cout << "Enter number of elements: ";
    cin >> count;

    for (int i = 1; i <= count; ++i) {
        int val;
        cout << "Enter number " << i << ": ";
        cin >> val;
        numbers.push_back(val);
    }

    cout << endl; 

    cout << "Numbers stored in vector:" << endl;
   
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << endl;
}
    cout << endl;
    

//task 2
    if (!numbers.empty()) {
        int minVal = numbers[0];
        int maxVal = numbers[0];

        for (size_t i = 1; i < numbers.size(); ++i) {
            if (numbers[i] < minVal) minVal = numbers[i];
            if (numbers[i] > maxVal) maxVal = numbers[i];
        }

        cout << "\n2: Min and Max Values: " << endl;
        cout << "Minimum value: " << minVal << endl;
        cout << "Maximum vlaue: " << maxVal << endl;

        int sum = 0;
        
       for (int i = 0; i < numbers.size(); i++) {
    sum += numbers[i];
}
        
        double average = static_cast<double>(sum) / numbers.size();

//task 3
        cout << "\n3: Sum and Average: " << endl;
        cout << "Sum: " << sum << endl;
        cout << fixed << setprecision(2);
        cout << "Average: " << average << endl;


//task 4
        cout << "\n4: Search for a Value: " << endl;
        int searchVal;
        cout << "Enter a number to search: ";
        cin >> searchVal;

        bool found = false;
        int index = -1;

        for (size_t i = 0; i < numbers.size(); ++i) {
            if (numbers[i] == searchVal) {
                found = true;
                index = i;
                break; 
            }
        }

        if (found) {
            cout << "Value " << searchVal << " found at index: " << index << endl;
        } else {
            cout << "Value " << searchVal << " not found in the vector." << endl;
        }
        
        //task 5

        cout << "\n5: Vector in Reverse Order: " << endl;
        printReverse(numbers);
    }

    return 0;
}

void printReverse(const vector<int>& data) {
    cout << "Reversed: ";

    for (int i = data.size() - 1; i >= 0; --i) {
        cout << data[i] << " ";
    }
    cout << endl;
}




