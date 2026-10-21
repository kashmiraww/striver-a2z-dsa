/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
*****
*   *
*   *
*   *
***** */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern21(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==n-1 || j==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
};

int main(){
    int n = 5;
    Solution sol;
    sol.pattern21(n);
    return 0;
}