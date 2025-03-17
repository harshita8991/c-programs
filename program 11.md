# PROGRAM 11
```cpp
#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero exception");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num, denom;

    cout << "Enter numerator: ";
    cin >> num;

    cout << "Enter denominator: ";
    cin >> denom;

    try {
        double result = divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
```

![image](https://github.com/user-attachments/assets/415deb4f-68e4-4bb5-a723-91e0df9564f9)

![Screenshot 2025-03-17 004343](https://github.com/user-attachments/assets/a94bfeeb-e6b2-4f50-8706-e52cce73b369)
