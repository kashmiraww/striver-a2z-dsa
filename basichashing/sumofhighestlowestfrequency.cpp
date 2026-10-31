#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int n = nums.size();
        int maxfre = 0, minfre = INT_MAX;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int fre = it.second;
            maxfre = max(maxfre, fre);
            minfre = min(minfre, fre);
        }
        return maxfre + minfre;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    Solution sol;
    sol.sumHighestAndLowestFrequency(nums);
    cout<<"Sum of highest and lowest occurring frequency is "<<sol.sumHighestAndLowestFrequency(nums)<<endl;
    return 0;
}