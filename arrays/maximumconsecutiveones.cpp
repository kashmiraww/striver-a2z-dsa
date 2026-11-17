#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                maxi = max(maxi, cnt);
            }
            else{
                cnt = 0;
            }
        }
        return maxi;
    }
};

int main() {
    vector nums = {1, 1, 0, 1, 1, 1};
    Solution sol;
    cout<<"The maximum consecutive 1's are "<<sol.findMaxConsecutiveOnes(nums)<<endl;
    return 0;
}