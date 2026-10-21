#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0;
    cin>>n;
    if(n == 0){
        cout<<"1"<<endl;
    }
    else{
        while(n>0){
            n /= 10;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

// or can be solved by cnt = log10(n) + 1;