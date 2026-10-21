/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
A
BB
CCC
DDDD
EEEEE */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
        for(int i=0;i<n;i++){
            char c = 'A'+i;
            for(int j=0;j<=i;j++){
                cout<<c;
            }
            cout<<endl;
        }
    }
};

int main(){
    int n = 6;
    Solution sol;
    sol.pattern16(n);
    return 0;
}