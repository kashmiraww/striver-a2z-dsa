#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int> &arr, int low, int mid, int high){
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low; i<=high;i++){
            arr[i] = temp[i-low];
        }
    }
    void mergeSortHelper(vector<int> &arr, int low, int high){
        if(low>=high){
            return;
        }
        int mid = (low+high)/2;
        mergeSortHelper(arr, low, mid);
        mergeSortHelper(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    vector<int> mergeSort(vector<int>& nums) {
        mergeSortHelper(nums, 0, nums.size()-1);
        return nums;
    }
};

int main() {
    int n = 7;
    vector<int> nums = {64, 25, 12, 22, 11, 90, 45};
    Solution solution;
    vector<int> sorted_nums = solution.mergeSort(nums);
    for(int i=0; i<sorted_nums.size(); i++){
        cout<<sorted_nums[i]<<" ";
    }
    return 0;
}