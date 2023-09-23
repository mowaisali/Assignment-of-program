#include <iostream>
using namespace std;
int main()
{
    int base, exponent;  
    cout << "Enter the base: "; 
    cin >> base; 
    cout << "Enter the exponent: "; 
    cin >> exponent;  
 
    int result = 1;

    
    int power = 0;
    do
    {
        result *= base; 
        power++; 
    } while (power < exponent); 
    cout << "The result is: " << result << endl; 

    return 0; 
}
