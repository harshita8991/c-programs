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

![image](https://github.com/user-attachments/assets/88cdf88f-525c-4805-bd17-2f91c635fa10)

![image](https://github.com/user-attachments/assets/2e54e4f9-5097-4094-9b69-9a7d0080f26a)
