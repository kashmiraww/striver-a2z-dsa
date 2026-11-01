#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
			if(s.length()!=t.length()){
                return false;
            }
            vector<int> count(26, 0);
            for(char c:s){
                count[c-'a']++;
            }
            for(char c:t){
                count[c-'a']--;
            }
            for(int i:count){
                if(i!=0){
                    return false;
                }
            }
            return true;
		}
};

int main() {
    string str1 = "integer";
    string str2 = "tegerni";
    Solution sol;
    bool result = sol.anagramStrings(str1, str2);
    if(result) cout << "The given strings are anagrams.";
    else cout << "The given strings are not anagrams.";
    return 0;
}