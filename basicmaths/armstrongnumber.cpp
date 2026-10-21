#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin>>n;
    int cnt = log10(n)+1;
    int copy = n;
    while(n>0){
        int last = n%10;
        sum += round(pow(last, cnt));
        n /= 10;
    }
    if(sum==copy){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}