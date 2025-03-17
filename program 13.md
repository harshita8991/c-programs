# PROGRAM
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;

    void input() {
        cout << "Enter Roll No, Name, Class, Year, and Total Marks: ";
        cin >> rollNo >> name >> className >> year >> totalMarks;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name 
             << "\n Class: " << className << ", Year: " << year 
             << "\n Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student students[5];

    // Taking input for 5 students
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Student " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
```
![image](https://github.com/user-attachments/assets/09e4a5f7-8dec-40b0-83a5-05373c7dabfe)
