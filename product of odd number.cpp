#include <iostream>
using namespace std;

int main()
{
        int product = 1;
    for (int i = 1; i <= 10; i += 2)
    {
        product *= i; 
    }
    cout << "The product of odd numbers : " << product << endl; 
    return 0; 
}
