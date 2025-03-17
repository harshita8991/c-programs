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