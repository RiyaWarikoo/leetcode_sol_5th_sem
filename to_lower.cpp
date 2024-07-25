#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = sol.toLowerCase(input);
    cout << "Lowercase string: " << result << endl;
    return 0;
}
