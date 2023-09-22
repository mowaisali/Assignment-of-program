#include <iostream>
using namespace std;

int main()
{
	double salary;
	cout << "enter salary "<<endl;
	cin >> salary;
	double grade;
	cout << "enter grade"<< endl;
	cin >> grade;
	if (grade>15){ 
	 salary += 0.5*salary ;
	}else{
		
		salary += 0.25*salary  ;
	}
	cout << salary;
	return 0; 
}