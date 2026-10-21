/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:
*****
****
***
**
* */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static void pattern5(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    Solution sol;
    sol.pattern5(N);
    return 0;
}