#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool checkPrime(int num){
			if(num<=1){
                return false;
            }
            return prime(num, 2);
        }
    private:
        bool prime(int num, int x){
            if(x>sqrt(num)){
                return true;
            }
            if(num%x==0){
                return false;
            }
            return prime(num, x+1);
        }
};

int main() {
    Solution sol;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(sol.checkPrime(num)){
        cout<<num<<" is a prime number."<<endl;
    } 
    else{
        cout<<num<<" is not a prime number."<<endl;
    }
    return 0;
}