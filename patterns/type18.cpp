/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
E 
D E 
C D E 
B C D E 
A B C D E */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
        for(int i=1;i<=n;i++){
            int st = 'A'+n-i;
            for(int j=0;j<i;j++){
                cout<<char(st+j)<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n = 5;
    Solution sol;
    sol.pattern18(n);
    return 0;
}