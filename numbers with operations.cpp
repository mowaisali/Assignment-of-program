#include <iostream>
#include <cmath>
using namespace std;
// two number with arithmetic operators
 int main(){
 	int num1,num2;
 	char operations;
 	cout << "value of num1" << endl;
 	cin>> num1;
 	cout << "value of num2" << endl;
 	cin >> num2 ;
 	cout << "operations (+,-,*,/)" << endl;
 	cin >> operations;
 	switch (operations){
 		case '+':
 			cout<< "addition = " << num1+num2;
 			break ;
 			case '-':
 				cout << "subtraction" << num1 - num2;
 				break;
 				case '*':
 					cout << "multiply" << num1*num2;
 					break;
 					case '/':
 						cout << "division"<< num1/num2;
 						break;
 						default :
 							cout << "invalid operation";
 						
	 }
	 return 0;
	 
 }