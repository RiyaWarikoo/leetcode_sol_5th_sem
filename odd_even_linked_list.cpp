#include <iostream>
#include <list>
using namespace std;
int main() {
    
    list<int> lst = {1, 2, 3, 4, 5};
    auto it = lst.begin();
    advance(it, 3); 

    list<int> secondPart;
    secondPart.splice(secondPart.begin(), lst, it, lst.end());
    lst.splice(lst.begin(), secondPart);
    cout << "Rearranged list: ";
    for (const auto& num : lst) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}