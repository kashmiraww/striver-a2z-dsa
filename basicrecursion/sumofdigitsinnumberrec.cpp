#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int addDigits(int num){
		if(num<10){
            return num;
        }
        int sum = sumDigits(num);
        return addDigits(sum);
	}
private:
    int sumDigits(int num){
        if(num==0){
            return 0;
        }
        return sumDigits(num/10)+(num%10);
    }
};

int main() {
    Solution sol;
    int num = 123;
    int result = sol.addDigits(num);
    cout<<"The sum of digits in "<<num<<" is: "<<result<<endl;
    return 0;
}