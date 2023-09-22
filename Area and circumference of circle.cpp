#include <iostream>
# define pi 3.14
 // Area and circumference of circle
 using namespace std;
 int main()
  {
  	int radius;
  	cout << "enter value of radius";
  	cin >> radius;
  	float Area;
  	Area = pi * (radius * radius);
  	cout <<"Area =" <<Area << endl;
  	
  	float circumference ;
  	cout << "circumference=" << 2 * pi * radius;
  	
  	return 0;
  }
