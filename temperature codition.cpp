#include <iostream>
using namespace std;
// temperature condition 
int main ()
{
	int temperature;
	cout << "enter value of temperature";
	cin >> temperature ;
	if (temperature > 35){
		cout << "Hot Day";
	}else if (temperature>25){
	cout << "Pleasant day";	
	}else {
		cout << "cool Day";
	}
	return 0;
}

