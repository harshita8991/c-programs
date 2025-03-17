# PROGRAM 3

```cpp
#include <iostream>
#include <string>
#include <map>
using namespace std;

void countOccurrences(string str) {
    map<char, int> freq;
    for (char c : str) {
        if (isalpha(c)) { // Consider only alphabets
            freq[tolower(c)]++;
        }
    }
    cout << "Character Frequency Table:\n";
    for (auto pair : freq) {
        cout << pair.first << " > " << pair.second << endl;
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    countOccurrences(input);
    
    return 0;
}
```
![image](https://github.com/user-attachments/assets/2865a499-0c6b-4818-b858-54d22440f595)

![image](https://github.com/user-attachments/assets/f4a6b533-9182-4079-8eb8-7ff32164cd61)

