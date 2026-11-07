#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		int arraySum(vector<int>& nums){
			return sum(nums, 0);
		}
    private:
    int sum(vector<int> &nums, int left){
        if(left>=nums.size()){
            return 0;
        }
        return nums[left]+sum(nums, left+1);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};   
    int result = solution.arraySum(nums); 
    cout<<result<<endl;
    return 0;
}