/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
    *
   ***
  *****
 *******
********* */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern7(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int k=0;k<2*i+1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n = 7;
    Solution sol;
    sol.pattern7(n);
    return 0;
}