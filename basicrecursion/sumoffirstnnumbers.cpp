#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
			if(N==0){
                return 0;
            }
            return N+NnumbersSum(N-1);
		}
};

int main() {
    int N = 7;
    Solution sol;
    cout<<sol.NnumbersSum(N)<<endl;
    return 0;
}