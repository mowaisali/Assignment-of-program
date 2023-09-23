#include <iostream>
using namespace std;
int main() {
    int n = 2; 
    double sum = 1.0; 

    do {
        sum += 1.0 / n;
        n += 2;  
    } while (n <= 100);

    cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
