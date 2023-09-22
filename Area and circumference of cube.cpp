#include <iostream>
using namespace std;
 // Area and circumference of cube
 # define pi 3.14
  int main(){
  
  int radius ;
  cout << "enter value of radius";
  cin >> radius;
  int area ;
  area =( 4* (pi *(radius * radius)));
  cout << "area of cube = " << area << endl;
  int circumference; 
  circumference = ((4/3) *(pi*(radius *radius*radius)));
  cout << "circumference of cube = " << circumference << endl;
return 0 ;
}


