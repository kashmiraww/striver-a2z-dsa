#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			return isPalindrome(s, 0, s.length()-1);
		}
    private:
        bool isPalindrome(string &s, int l, int r){
            if(l>=r){
                return true;
            }
            if(s[l]!=s[r]){
                return false;
            }
            return isPalindrome(s, l+1, r-1);
        }
};

int main() {
    Solution solution;
    cout<<boolalpha; 
    string str = "racecar";
    cout<<solution.palindromeCheck(str)<<endl;
    return 0;
}