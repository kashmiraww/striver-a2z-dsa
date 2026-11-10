#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            bool swapped = false;
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    swapped = true;
                }
            }
            if(!swapped){
                break;
            }
        }
        return nums;
    }
};

int main() {
    int n = 7;
    vector<int> nums = {64, 25, 12, 22, 11, 90, 45};
    Solution solution;
    vector<int> sorted_nums = solution.bubbleSort(nums);
    for(int i=0; i<sorted_nums.size(); i++){
        cout<<sorted_nums[i]<<" ";
    }
    return 0;
}