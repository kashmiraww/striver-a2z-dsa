#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			if(nums.size()<=1){
                return true;
            }
            return sort(nums, 0, 1);
        }
    private:
        bool sort(vector<int> &nums, int l, int r){
            if(r>=nums.size()){
                return true;
            }
            if(nums[l]>nums[r]){
                return false;
            }
            return sort(nums, l+1, r+1);
        }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    if(sol.isSorted(nums)){
        cout<<"The array is sorted."<<endl;
    }
    else{
        cout<<"The array is not sorted."<<endl;
    }
    return 0;
}