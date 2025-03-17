# PROGRAM 1
```cpp
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
```

![Screenshot 2025-03-16 215348](https://github.com/user-attachments/assets/5deedd6c-a90c-4d97-8b61-ff26c777ad85)

![Screenshot 2025-03-16 215721](https://github.com/user-attachments/assets/55e95247-7076-4dd7-a1fa-ef8ebd05edf6)





