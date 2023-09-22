#include <iostream>
using namespace std;
// find maximum number using operators
int main(){
	int num1,num2,num3;
	cout << "enter value of num1" << endl;
	cout << "enter value of num2"<< endl;
	cout << "enter value of num3" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	int maximum = num1;
	if (num2>maximum){
	maximum=num2;
	}if (num3>maximum){
	maximum=num3;
	}
 cout << "maximum" << maximum;	
}
