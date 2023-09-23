#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter the starting point: "; 
    cin >> start;  
    cout << "Enter the ending point: "; 
    cin >> end; 
    if (start % 2 == 0)
        start++;
    int i = start;
    do
    {
        cout << i << " "; 
        i += 2;
    } while (i <= end); 
    cout << endl; 

    return 0; 
}
