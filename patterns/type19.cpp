/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
********** */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
        int ini = 0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            for(int j=0;j<ini;j++){
                cout<<" ";
            }
            for(int j=1;j<=n-i;j++){
                cout<<"*";
            }
            ini += 2;
            cout<<endl;
        }
        ini = 2*n-2;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int j=0;j<ini;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            ini -= 2;
            cout<<endl;
        }
    }
};

int main(){
    int n = 5;
    Solution sol;
    sol.pattern19(n);
    return 0;
}