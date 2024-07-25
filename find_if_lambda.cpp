#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> num = {1,3,5,8,10,13};
    //Using find if with a lambda to find the first even number
    auto it = find_if(num.begin(),num.end(), [](int n){
        return n%2==0; //Predicate to find even numbers

    });

    if(it != num.end()){
        cout << "First even number found is : " << *it << endl;
    }
    else{
        cout << "No even number found" << endl;
    }
    return 0;
}