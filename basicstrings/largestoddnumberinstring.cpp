#include <bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        int ind = -1, i;
        for(int i=s.length()-1; i>=0; i--){
            if((s[i]-'0')%2==1){
                ind = i;
                break;
            }
        }
        i = 0;
        while(i<=ind && s[i]=='0'){
            i++;
        }
        return s.substr(i, ind-i+1);
    }
};

int main() {
    Solution sol;
    string s = "1234567890";
    cout<<"Largest odd number in string is "<<sol.largeOddNum(s)<<endl;
    return 0;
}