# PROGRAM 4

```cpp
#include <iostream>
#include <cstring>

using namespace std;
// Function to display ASCII values
void displayASCII(string str) {
    cout << "ASCII values:\n"; 
    for (char c : str) {
        cout << c << " : " << int(c) << endl;
    }
}

// function to concatentate two strings (without built-in functions)
void concatenate(char str1[], char str2[]) {
    int i = strlen(str1), j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

// function to compare two strings
bool compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return str1[i] == str2[i];
}

// function to find the length of a string using pointers
int stringLength(char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

//function to convert lowercase to uppercase
void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

// function to reverse a string
void reverseString(char str[]) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        swap(str[i], str[length - i - 1]);
    }
}

int main() {
    char str1[100], str2[100];
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";    
    cin >> str2;

    displayASCII(str1);

    //CONCATENATION
    concatenate(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    //COMPARISON
    cout << "Strings are " << (compareStrings(str1, str2) ? "Equal" : "Not equal") << endl;

    // STRING LENGTH
    cout << "Length of the first string: " << stringLength(str1) << endl;

    //CONVERT TO UPPERCASE
    toUpperCase(str1);
    cout << "Uppercase string: " << str1 << endl;

    //REVERSE STRING
    reverseString(str1);
    cout << "Reversed string: " << str1 << endl;

    return 0;
}
```
![image](https://github.com/user-attachments/assets/f84c234b-beff-4a97-a6e2-ddc826e40a50)
![Screenshot 2025-03-16 231201](https://github.com/user-attachments/assets/1c38fce6-ccb4-4bf6-b066-d8a059b839a4)
![Screenshot 2025-03-16 231400](https://github.com/user-attachments/assets/7e738ae1-cd5e-44e6-97be-02f39fbb4a2b)

![Screenshot 2025-03-16 230926](https://github.com/user-attachments/assets/1ad4de54-77ba-4171-839e-9e9b8ac9cd97)
