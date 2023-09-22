#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Please enter a three-digit number: ";
    cin >> number;

    // Extract the digits
    int firstDigit = number % 10;
    int secondDigit = (number / 10) % 10;
    int thirdDigit = (number / 100) % 10;

    // Display in reverse order
    cout << "Number in reverse order: " << firstDigit << secondDigit << thirdDigit << endl;

    return 0;
}
