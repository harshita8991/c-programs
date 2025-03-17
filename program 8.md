# PROGRAM 8
```cpp
#include <iostream>
#include <vector>
using namespace std;

class Matrix {
    vector<vector<int>> mat;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c), mat(r, vector<int>(c)) {}

    void input() {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }

    void display() {
        for (const auto& row : mat) {
            for (int elem : row)
                cout << elem << " ";
            cout << endl;
        }
    }

    Matrix add(const Matrix& other) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    Matrix multiply(const Matrix& other) {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < other.cols; j++)
                for (int k = 0; k < cols; k++)
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
        return result;
    }

    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[j][i] = mat[i][j];
        return result;
    }
};

int main() {
    int r, c, choice;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    Matrix m1(r, c), m2(r, c), result(r, c);
    m1.input();
    m2.input();

    cout << "1. Sum\n2. Product\n3. Transpose\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        result = m1.add(m2);
        cout << "Sum:\n";
        result.display();
        break;
    case 2:
        result = m1.multiply(m2);
        cout << "Product:\n";
        result.display();
        break;
    case 3:
        cout << "Transpose of first matrix:\n";
        m1.transpose().display();
        break;
    default:
        cout << "Invalid choice\n";
    }

    return 0;
}
```

![image](https://github.com/user-attachments/assets/ffc68fed-4ae0-4a1b-98da-28cd2b900cd1)
![image](https://github.com/user-attachments/assets/6176634c-5e41-421b-aaff-bc8065a99f13)
![image](https://github.com/user-attachments/assets/ac1def6b-6072-47f5-bdf2-90a7f9113451)

![image](https://github.com/user-attachments/assets/b37da835-a73b-4b4d-8177-a8f8e4245c12)
