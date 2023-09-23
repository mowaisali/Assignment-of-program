#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int factorial = 1;
       for (int i = 1; i <= 5; i++)
    {    for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sum += factorial; 
    }
    cout << "The sum of the series is: " << sum << endl; 
    return 0; 
}
