#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter a positive integer: ";  
    cin >> n;

    int sum = 0;
        for (int i = 1; i <= n; i++)
    {
        sum += i * i; 
    }
    cout << "The sum of squares "  << sum << endl; 
    return 0; 
}

