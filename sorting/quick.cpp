#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partition(vector<int> &arr, int low, int high){
        int randomIndex = low+rand()%(high-low+1);
        swap(arr[low], arr[randomIndex]);
        int pivot = arr[low];
        int i = low, j = high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            while(arr[j]>pivot && j>=low+1){
                j--;
            }
            if(i<j){
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }
    void quickSortHelper(vector<int> &arr, int low, int high){
        if(low<high){
            int pIndex = partition(arr, low, high);
            quickSortHelper(arr, low, pIndex-1);
            quickSortHelper(arr, pIndex+1, high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        quickSortHelper(nums, 0, nums.size()-1);
        return nums;
    }
};

int main() {
    int n = 7;
    vector<int> nums = {64, 25, 12, 22, 11, 90, 45};
    Solution solution;
    vector<int> sorted_nums = solution.quickSort(nums);
    for(int i=0; i<sorted_nums.size(); i++){
        cout<<sorted_nums[i]<<" ";
    }
    return 0;
}