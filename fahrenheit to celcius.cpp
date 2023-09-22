#include <iostream>
using namespace std;
// fahrenheit to celcius 
int main()
{
	double fahrenheit;
	cout << "enter temperature in fahrenheit ";
	cin >> fahrenheit;
	double  celcius;
	celcius = (fahrenheit-32)*5/9;
	cout << celcius ;
	
	return 0;
}