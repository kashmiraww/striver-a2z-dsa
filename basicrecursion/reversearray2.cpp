#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(vector<int>& nums) {
        reverse(nums, 0, nums.size()-1);
        return nums; 
    }
private:
    void reverse(vector<int>& nums, int l, int r){ 
        if(l>=r){
            return; 
        }
        int temp = nums[l]; 
        nums[l] = nums[r];
        nums[r] = temp;
        reverse(nums, l+1, r-1); 
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> result = sol.reverseArray(nums);
    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}