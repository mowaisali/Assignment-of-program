#include <iostream>
#include <cmath>
using namespace std;
// factorial of given number
int main(){

int a;
 cout << "enter value of a";
cin >> a;

int factorial=1;
while (a>=1){
	factorial = a*factorial;
	
	a--;
}
cout << factorial ;
}