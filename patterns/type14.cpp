/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
A
AB
ABC
ABCD
ABCDE */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
        for(int i=0;i<n;i++){
            for(char c='A';c<='A'+i;c++){
                cout<<c;
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution sol;
    int n = 4;
    sol.pattern14(n);
    return 0;
}