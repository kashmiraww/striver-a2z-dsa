#include <bits/stdc++.h>
using namespace std;

class Solution{	
private: 
    void reverse(vector<char> &s, int l, int r){
        if(l>=r){
            return;
        }
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        reverse(s, l+1, r-1);
    }
public:		
	vector<char> reverseString(vector<char>& s){
        reverse(s, 0, s.size()-1);
        return s;
	}
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    vector<char> result = sol.reverseString(s);
    for(char c:result){
        cout<<c;
    }
    return 0;
}