#include <bits/stdc++.h>
using namespace std;
class Solution {

public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n = nums.size(), maxfre = 0, secmaxfre = 0,
        maxele = -1, secele = -1;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int ele = it.first;
            int fre = it.second;
            if(fre>maxfre){
                secmaxfre = maxfre;
                maxfre = fre;
                secele = maxele;
                maxele = ele;
            }
            else if(fre==maxfre){
                maxele = min(maxele, ele);
            }
            else if(fre==secmaxfre){
                secele = min(secele, ele);
            }
            else if(fre>secmaxfre){
                secmaxfre = fre;
                secele = ele;
            }
        }
        return secele;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    Solution sol;
    sol.secondMostFrequentElement(nums);
    cout<<"The second most frequent element is "<<sol.secondMostFrequentElement(nums)<<endl;
    return 0;
}