#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		void reverseString(vector<char>& s){
			int l = 0, r = s.size()-1;
            while(l<r){
                swap(s[l], s[r]);
                l++, r--;
            }
        return;
    }
};

int main() {
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    Solution sol;
    sol.reverseString(str);
    for(char c:str){
        cout<<c;
    }
    return 0;
}