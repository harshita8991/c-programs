# PROGRAM7
```cpp
#include <iostream>
using namespace std;

// Recursive GCD function
int gcdRecursive(int a, int b) {
    return (b == 0) ? a : gcdRecursive(b, a % b);
}

// Iterative GCD function
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 56, b = 98;

    // Using recursion
    cout << "GCD (Recursive): " << gcdRecursive(a, b) << endl;

    // Using iteration
    cout << "GCD (Iterative): " << gcdIterative(a, b) << endl;

    return 0;
}
```
![image](https://github.com/user-attachments/assets/3273e458-1357-487b-a758-028de8416737)

![Screenshot 2025-03-17 000101](https://github.com/user-attachments/assets/1670aab5-8783-4fdf-935b-c84c006c2b59)
