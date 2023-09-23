#include <iostream>
using namespace std;

int main()
{
        double sum = 0;
        for (int i = 1; i < 100; i++)
    {
           double term = (double) i / (i + 1);

        sum += term; 
    }
    cout << "The sum of the series is: " << sum << endl; 
    return 0; 
}
