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

![Screenshot 2025-03-16 220622](https://github.com/user-attachments/assets/4c57cbf8-2516-4d4c-93d3-08cc47f31e20)

![Screenshot 2025-03-16 223010](https://github.com/user-attachments/assets/464f5bf2-f451-451c-9979-c678733b4279)
