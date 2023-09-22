# include <iostream>
# define pi 3.14
using namespace std;
// area or circumference 
int main()
{int radius;
cout << "enter value of radius";
cin >> radius;
float area;
float circumference;
int choice;
cout << "enter choice";
cin >> choice;
if (choice == 1){
	cout<< "choice is 1 print area of circle"<<endl;
area =	pi * (radius * radius);
cout <<"area =" << area;	
}else if (choice == 2){
cout<< "choice is 2 print area of circumference"<<endl; 
circumference = 2 * pi * radius;
cout << "circunference =" << circumference;
}else {
	cout << "choice is invalid";
}
}

