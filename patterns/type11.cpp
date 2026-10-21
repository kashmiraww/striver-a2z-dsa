/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        int st = 1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                st = 1;
            }
            else{
                st = 0;
            }
            for(int j=0;j<=i;j++){
                cout<<st;
                cout<<" ";
                st = 1-st;
            }
            cout<<endl;
        }
    }
};