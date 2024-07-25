#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    cout << "Array elements:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int primaryDiagonalSum = 0;
    for (int i = 0; i < 3; ++i) {
        primaryDiagonalSum += arr[i][i];
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < 3; ++i) {
        secondaryDiagonalSum += arr[i][2 - i];
    }

    cout << "Sum of the primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
