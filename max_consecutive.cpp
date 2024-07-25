#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            if(max<count){
                max=count;
            }
            if(nums[i]==0){
                count=0;
            }
        }
        return max;
    }
};