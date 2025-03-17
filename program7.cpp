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