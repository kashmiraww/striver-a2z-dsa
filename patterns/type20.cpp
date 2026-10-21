/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        * */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern20(int n) {
        int ini = 2*n-2;
        for(int i= 1;i<=n;i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            for(int j=0; j<ini; j++){
                cout<<" ";
            }
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            ini -= 2;
            cout << endl;
        }
        ini = 2;
        for(int i=n-1; i>=1; i--){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            for(int j=0; j<ini; j++){
                cout<<" ";
            }
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            ini += 2;
            cout << endl;
        }
    }
};

int main(){
    int n = 5;
    Solution sol;
    sol.pattern20(n);
    return 0;
}