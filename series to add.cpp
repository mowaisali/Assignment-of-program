#include <iostream>
using namespace std;

int main() {
    int n = 2; 
    double sum = 1.0; 

    while (n <= 100) {
        sum += 1.0 / n;
        n += 2;  
    }

    cout << "Sum of the series: " << sum << std::endl;

    return 0;
}

