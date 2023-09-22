#include <iostream>
using namespace std;
// height from iches to centimeters
int main ()
{
	float inches , centimeters;
	cout << "enter height in inches" << endl;
	cin >> inches ;
	centimeters = inches * 2.54 ;
	cout << "centimeters =" << centimeters  ;
	return 0;
}
