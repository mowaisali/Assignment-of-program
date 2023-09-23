#include <iostream>
#include <cmath> // include the cmath library to use the pow function
using namespace std;

int main()
{
    int x; 
    cout << "Enter the value of x: "; 
    cin >> x; 
     int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
    int term = i * pow(x, i - 1);
        sum += term; 
    }
    cout << "The sum of the series is: " << sum << endl; 
    return 0; 
	}
