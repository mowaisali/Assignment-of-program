#include <iostream>
using namespace std;
// sum product and average 

int main()
{
	int a;
	int b;
	int c;
	int d;
	cout << "enter value of a" << endl;
	cout << "enter value of b"<< endl;
	cout << "enter value of c"<< endl;
	cout << "enter value of d"<< endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	int sum;
	sum = a+b+c+d;
	cout << "sum =" << sum << endl;
	int product = (a*b)*(c*d);
	cout << "product =" << product << endl;
	int average = (a+b+c+d) / 4;
	cout << "average =" << average ;
	return 0;
	
}
