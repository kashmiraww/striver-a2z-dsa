#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int largee = nums[nums.size()-1];
        return largee;
    }
};

int main() {
    Solution sol; 
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    cout<<sol.largestElement(nums)<<endl;
    return 0;
}