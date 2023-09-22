#include <iostream>
#include <string>
using namespace std;

// name and age and address
int main()
{
	int age;
	string name;
	string address;
	cout << "enter your age";
	cin >> age;
	cout <<"enter your name	";
	
	cin. ignore();
	getline(cin,name);
	cout << "enter your address";
	cin.ignore();
	getline(cin,address);
	
	cout << age << endl;
	cout << name << endl;
	cout << address<< endl;
	 return 0;
}