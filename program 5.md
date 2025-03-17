# PROGRAM 5
```cpp
# include <iostream>
# include <vector>

using namespace std;

vector<int> mergeArrays(vector<int> arr1, vector<int> arr2) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> merged = mergeArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }       

    return 0;
}
```

![image](https://github.com/user-attachments/assets/1a9065c0-8df2-4ab3-800e-68b87e9dcf7c)
![image](https://github.com/user-attachments/assets/24e32272-a218-433a-8c32-afc3a00fb254)

![Screenshot 2025-03-16 232836](https://github.com/user-attachments/assets/e26d3fbe-bd7f-48ef-915a-35d990861cb5)
