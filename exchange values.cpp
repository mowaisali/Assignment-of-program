#include <iostream>
using namespace std;
// swapping values
int main()
{
	int a=20;
	int b =30;
	int exchange;
	cout << "value of a before exchange =" << a << endl ;
	cout << "value of b before exchange =" << b << endl ;
	exchange = a ;
	a = b ;
	b = exchange ;
	cout << "value of a after exchange =" << a << endl ;
	cout << "value of b after exchange =" << b << endl ;
	return 0;
	
}
