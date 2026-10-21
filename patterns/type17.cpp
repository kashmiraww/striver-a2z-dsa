/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        for(int i=1;i<=n;i++){
            for(int s=1;s<=n-i;s++){
                cout<<" ";
            }
            for(int j=0;j<i;j++){
                cout<<char('A'+j);
            }
            for(int k=i-2;k>=0;k--){
                cout<<char('A'+k);
            }
            cout<<endl;
        }
    }
};

int main(){
    int n = 5;
    Solution sol;
    sol.pattern17(n);
    return 0;
}