#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			int l = 0, r = s.length()-1;
            while(l<r){
                if(s[l]!=s[r]){
                    return false;
                }
                l++, r--;
            }
            return true;
		}
};

int main(){
    Solution solution;
    string str = "racecar";  
    if(solution.palindromeCheck(str)){
        cout<<str<<" is a palindrome."<<endl;
    } else {
        cout<<str<<" is not a palindrome."<<endl;
    }
    return 0;
}