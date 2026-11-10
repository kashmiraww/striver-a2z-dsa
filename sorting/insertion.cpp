#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            int key = nums[i];
            int j = i-1;
            while(j>=0 && nums[j]>key){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }
        return nums;
    }
};

int main() {
    int n = 7;
    vector<int> nums = {64, 25, 12, 22, 11, 90, 45};    
    Solution solution;
    vector<int> sorted_nums = solution.insertionSort(nums);
    for(int i=0; i<sorted_nums.size(); i++){
        cout<<sorted_nums[i]<<" ";
    }
    return 0;
}