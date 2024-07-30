#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int size1 = image.size();
        int size2 = image[0].size();
        
        for (int i = 0; i < size1; i++) {
            reverse(image[i].begin(), image[i].end()); 
            for (int j = 0; j < size2; j++) {
                image[i][j] = image[i][j] == 0 ? 1 : 0; 
            }
        }
        
        return image;        
    }
};

int main() {
    Solution solution;
    vector<vector<int>> image = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 1, 0}
    };
    
    vector<vector<int>> result = solution.flipAndInvertImage(image);
    
    cout << "Transformed Image:" << endl;
    for (const auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    
    return 0;
}
