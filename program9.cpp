#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    double base, height, side1, side2, side3;

public:
    // Constructor
    Triangle(double b = 0, double h = 0, double s1 = 0, double s2 = 0, double s3 = 0)
        : base(b), height(h), side1(s1), side2(s2), side3(s3) {}

    // Area calculation using base and height
    double area() {
        return 0.5 * base * height;
    }

    // Area calculation using three sides (Heron's formula)
    double area(double s1, double s2, double s3) {
        double s = (s1 + s2 + s3) / 2;
        return sqrt(s * (s - s1) * (s - s2) * (s - s3));
    }

    // Overloading assignment operator
    Triangle& operator=(const Triangle& other) {
        if (this != &other) {
            base = other.base;
            height = other.height;
            side1 = other.side1;
            side2 = other.side2;
            side3 = other.side3;
        }
        return *this;
    }

    // Overloading equality operator
    bool operator==(const Triangle& other) const {
        return (base == other.base && height == other.height &&
                side1 == other.side1 && side2 == other.side2 && side3 == other.side3);
    }

    // Display method
    void display() {
        cout << "Base: " << base << ", Height: " << height
             << ", Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
    }
};

int main() {
    Triangle t1(5, 10, 3, 4, 5);
    Triangle t2;

    cout << "Area (base and height): " << t1.area() << endl;
    cout << "Area (Heron's formula): " << t1.area(3, 4, 5) << endl;

    // Using assignment operator
    t2 = t1;
    cout << "Triangle t2 after assignment: ";
    t2.display();

    // Using equality operator
    cout << "t1 == t2: " << (t1 == t2 ? "True" : "False") << endl;

    return 0;
}