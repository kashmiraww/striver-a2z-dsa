/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
1        1
12      21
123    321
1234  4321
1234554321 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        int sp = 2*(n-1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int j=1;j<=sp;j++){
                cout<<" ";
            }
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
            sp -= 2;
        }
    }
};

int main(){
    int n;
    cin>>n;
    Solution obj;
    obj.pattern12(n);
    return 0;
}