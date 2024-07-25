#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the array from the last element to the first element
void rotateArray(vector<int>& arr) {
    if (arr.empty()) return;

    int lastElement = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
}

// Function to display the array
void displayArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

    cout << "Original array: ";
    displayArray(arr);

    int rotations = arr.size();
    for (int i = 0; i < rotations; ++i) {
        rotateArray(arr);
        cout << "Array after " << i + 1 << " rotations: ";
        displayArray(arr);
    }

    return 0;
}
