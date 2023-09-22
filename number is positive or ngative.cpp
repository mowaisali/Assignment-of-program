#include <iostream>
using namespace std;
// number is positive or negative or zero
int main() 
    {
    	int number;
    	cout << "enter a number";
    	cin >> number ;
    	if(number>0){
    		cout << "number is positive";
		}else if (number<0){
			cout << "number is negative";	
		}else { cout << "number is zero";
		}
		return 0;
		
	}
