#include <iostream>
using namespace std;

int main()
{
    int table, length; 
    cout << "Enter the table number: "; 
    cin >> table; 
    cout << "Enter the length of table: "; 
    cin >> length; 
    for (int i = 1; i <= length; i++)
    {
        cout << table << " x " << i << " = " << table * i << endl; 
   }

    return 0; 
}
