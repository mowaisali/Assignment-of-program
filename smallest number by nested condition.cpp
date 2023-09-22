#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Input three numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Find the smallest number using nested if statements
    if (num1 <= num2) {
        if (num1 <= num3) {
            cout << "The smallest number is: " << num1 << endl;
        } else {
            cout << "The smallest number is: " << num3 << endl;
        }
    } else {
        if (num2 <= num3) {
            cout << "The smallest number is: " << num2 << endl;
        } else {
            cout << "The smallest number is: " << num3 << endl;
        }
    }

    return 0;
}



