#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if(s.length() != goal.length()){
                return false;
            }
            string doubled = s+s;
            return doubled.find(goal) != string::npos;
		}
};

int main() {
    Solution sol;
    string s = "abcde";
    string goal = "cdeab";
    cout << (sol.rotateString(s, goal) ? "true" : "false") << endl;  
    s = "abcde";
    goal = "abced";
    cout << (sol.rotateString(s, goal) ? "true" : "false") << endl;
    return 0;
}