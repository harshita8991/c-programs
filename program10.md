# PROGRAM 10
```cpp
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}
    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
    string course;
    int marks;
    int year;

public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}
    void display() override {
        Person::display();
        cout << "Course: " << course << "\nMarks: " << marks << "\nYear: " << year << endl;
    }
};

class Employee : public Person {
    string designation;
    double salary;

public:
    Employee(string n, string d, double s) : Person(n), designation(d), salary(s) {}
    void display() override {
        Person::display();
        cout << "Designation: " << designation << "\nSalary: " << salary << endl;
    }
};

int main() {
    Person p("John Doe");
    Student s("Alice", "Computer Science", 90, 2023);
    Employee e("Bob", "Manager", 60000);

    cout << "Person Details:\n";
    p.display();
    cout << "\nStudent Details:\n";
    s.display();
    cout << "\nEmployee Details:\n";
    e.display();

    return 0;
}
```
![image](https://github.com/user-attachments/assets/8c8ffa6d-0ed6-46c4-8f2c-c88793c57702)
![Screenshot 2025-03-17 002856](https://github.com/user-attachments/assets/fad2d7be-de1b-45e6-9857-4444e4c199a0)

![image](https://github.com/user-attachments/assets/ce49f0ad-732e-4a53-a150-2179a75c47b4)
