#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for (auto i : nums1) {
            int k = 0;
            for (int j = (find(nums2.begin(), nums2.end(), i) - nums2.begin()); j < nums2.size(); j++) {
                if (i < nums2[j]) {
                    a.push_back(nums2[j]);
                    k = 1;
                    break;
                }
            }
            if (k == 0)
                a.push_back(-1);
        }
        return a;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = solution.nextGreaterElement(nums1, nums2);

    cout << "Next greater elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
