#include <iostream>
#include <vector>

using namespace std;

//Recursive binary search
int binarySearch(vector<int> arr, int left, int right, int key) {
    if (left > right) {
        return -1;
    }   
    int mid = left + (right - left) / 2;
    if (arr[mid] == key) {
        return mid;
    }   
    if (arr[mid] > key) {
        return binarySearch(arr, left, mid - 1, key);
    }
    return binarySearch(arr, mid + 1, right, key);
}

//Iterative binary search
int binarySearch(vector<int> arr, int key) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int key = 5;

    int indexRec = binarySearch(arr, 0, arr.size() - 1, key);
    cout << "Recursive Binary Search: " << (indexRec != -1 ? "Found at index " + to_string(indexRec) : "Not found") << endl;

    //Iterative binary search
    int indexIter = binarySearch(arr, key);
    cout << "Iterative Binary Search: " << (indexIter != -1 ? "Found at index " + to_string(indexIter) : "Not found") << endl;

    return 0;
}
