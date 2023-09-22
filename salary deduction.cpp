#include <iostream>
using namespace std;
// about salary deduction
int main()
{
	double salary;
	cout << "enter salary "<< endl;
	cin >> salary ;
	if (salary >= 20000){
		 salary -= 0.07*salary ;	
	}else if(10000 < salary < 20000){
	     salary = salary-1000 ;
		 
	} 
	cout << "new salary =" << salary;
 return 0;	
}
