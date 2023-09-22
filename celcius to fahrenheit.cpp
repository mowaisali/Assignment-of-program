#include <iostream>
#include <cmath>
using namespace std;

// celcius to fahrenheit

int main() {
	int celcius;
	cout << "enter value in celcius" <<endl;
	cin >> celcius;
	cout << "fahrenheit" << (celcius*9/5) +32 ;
	return 0;
}