## PROGRAM 2
```cpp
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void removeDuplicates(vector<int>& arr) {
    set<int> uniqueElements(arr.begin(), arr.end());
    arr.assign(uniqueElements.begin(), uniqueElements.end());
    }

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    
    cout << "original array: ";
    for (int num : arr) cout << num << " ";
    
    removeDuplicates(arr);

    cout << "\narray after removing duplicates: ";
    for (int num : arr) cout << num << " ";

    return 0;
}
```


![Screenshot 2025-03-16 220622](https://github.com/user-attachments/assets/ce17eafa-dbd4-4cdf-b70c-009b02691b22)

![Screenshot 2025-03-16 220443](https://github.com/user-attachments/assets/c5999a7e-a180-4003-9b3b-396d63bbd6ba)
