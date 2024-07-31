#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;
        return floor(log2(n)) == ceil(log2(n));
    }
};

int main() {
    Solution solution;
    int testCases[] = {0, 1, 2, 3, 4, 16, 18, 32, 64, 100};
    for (int n : testCases) {
        cout << "Is " << n << " a power of two? " << (solution.isPowerOfTwo(n) ? "Yes" : "No") << endl;
    }
    return 0;
}
