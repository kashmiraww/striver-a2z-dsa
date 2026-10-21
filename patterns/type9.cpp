/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
    * 
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    * */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern9(int n) {
        erect(n);
        inverted(n);
    }
private:
    void erect(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    void inverted(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*n-(2*i+1);j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n = 7;
    Solution sol;
    sol.pattern9(n);
    return 0;
}