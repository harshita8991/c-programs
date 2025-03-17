#include <iostream>
#include <cmath>

double seriessum(int n) { 
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i);
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }
    return sum;
}

int main() {
    int n;
    
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    std::cout << "The sum of the series is: " << seriessum(n) << std::endl;
    return 0;
}