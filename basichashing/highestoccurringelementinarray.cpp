#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n = nums.size(), maxele, maxfreq = 0;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int ele = it.first;
            int freq = it.second;
            if(freq>maxfreq){
                maxfreq = freq;
                maxele = ele;
            }
            else if(freq==maxfreq){
                maxele = min(maxele, ele);
            }
        }
    return maxele;
    }
};

int main() {
    vector<int> nums = {1, 3, 2, 1, 4, 3, 1};
    Solution sol;
    sol.mostFrequentElement(nums);
    cout<<"highest occurring element in the array is: "<<sol.mostFrequentElement(nums)<<endl;
    return 0;
}