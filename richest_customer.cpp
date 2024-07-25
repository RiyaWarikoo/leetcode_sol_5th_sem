#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulate function
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total = 0;
        for (int i = 0; i < accounts.size(); ++i) {
            int sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            total = max(total, sum);
        }
        return total;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}, {4, 5, 6}};
    cout << "Maximum Wealth: " << solution.maximumWealth(accounts) << endl;
    return 0;
}
