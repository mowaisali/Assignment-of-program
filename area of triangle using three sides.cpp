#include <iostream>
#include <cmath>
using namespace std;
// Area of triangle using three sides
int main(){

 int a;
 int b;
 int c;
 cout << "enter value of a"<< endl;
cout << "enter value of b"<< endl;
cout << "enter value of c"<< endl;
 cin >> a;
 cin >> b;
 cin >> c;
float s ;
s = ((a+b+c) /2);
float area ;
area =  sqrt(s*(s-a)*(s-b)*(s-c)) ;
cout << area ;
return 0;
}