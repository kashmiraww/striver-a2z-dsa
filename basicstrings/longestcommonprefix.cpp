#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			if(str.empty()){
                return "";
            }
            sort(str.begin(), str.end());
            string first = str[0];
            string last = str[str.size()-1];
            int minlen = min(first.size(), last.size());
            string ans = "";
            for(int i=0;i<minlen;i++){
                if(first[i]!=last[i]){
                    return ans;
                }
                ans += first[i];
            }
            return ans;
		}
};

int main() {
    Solution solution;
    vector<string> input = {"flower", "flow", "flight"};
    string result = solution.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}