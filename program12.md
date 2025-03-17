# PROGRAM 12
```cpp
#include <iostream>
#include <vector>
#include <stdexcept>
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
        if (rows != other.rows || cols != other.cols)
            throw runtime_error("Matrix dimensions do not match for addition.");
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
        return result;
    }

    Matrix multiply(const Matrix& other) {
        if (cols != other.rows)
            throw runtime_error("Matrix dimensions do not match for multiplication.");
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
    try {
        int r1, c1, r2, c2, choice;

        cout << "Enter rows and columns for Matrix 1: ";
        cin >> r1 >> c1;
        Matrix m1(r1, c1);
        m1.input();

        cout << "Enter rows and columns for Matrix 2: ";
        cin >> r2 >> c2;
        Matrix m2(r2, c2);
        m2.input();

        cout << "1. Sum\n2. Product\n3. Transpose of Matrix 1\nEnter your choice: ";
        cin >> choice;

        Matrix result(1, 1); // Temporary matrix for results

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
            result = m1.transpose();
            cout << "Transpose of Matrix 1:\n";
            result.display();
            break;
        default:
            cout << "Invalid choice\n";
        }
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
```
![image](https://github.com/user-attachments/assets/c70a4291-0811-4c63-9d8a-36154ef8f838)
![image](https://github.com/user-attachments/assets/a8bdb6ff-f464-489b-bee8-0c851e3c961f)
![image](https://github.com/user-attachments/assets/246853d0-3e68-45f5-82ae-bdde95be37c8)

![image](https://github.com/user-attachments/assets/7fc1c76a-1d03-48dd-a0ae-3016d3809f10)

