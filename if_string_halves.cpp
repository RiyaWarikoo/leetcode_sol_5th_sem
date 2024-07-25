#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

class Solution {
public:
    bool vowel(char c) {
        char t = tolower(c);
        return t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u';
    }

    bool halvesAreAlike(string s) {
        int vow = 0;
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            if (vowel(s[i])) vow++;
        }
        for (int i = n / 2; i < n; i++) {
            if (vowel(s[i])) vow--;
        }
        return vow == 0;
    }
};

int main() {
    Solution sol;
    string s = "book";
    bool result = sol.halvesAreAlike(s);
    cout << (result ? "true" : "false") << endl; 
    return 0;
}
