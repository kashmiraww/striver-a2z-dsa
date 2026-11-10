#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int mini = i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[mini]){
                    mini = j;
                }
            }
            if(mini!=i){
                swap(nums[mini], nums[i]);
            }
        }
        return nums;
    }
};

int main() {
    int n = 7;
    vector<int> nums = {64, 25, 12, 22, 11, 90, 45};
    Solution solution;
    vector<int> sorted_nums = solution.selectionSort(nums);
    for(int i=0; i<sorted_nums.size(); i++){
        cout<<sorted_nums[i]<<" ";
    }
    return 0;
}