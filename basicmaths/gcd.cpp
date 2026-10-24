#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
    int gcd = 1;
    while(m>0 && n>0){
        if(m>n){
            m = m%n;
        }
        else{
            n = n%m;
        }
    }
    if(m==0){
        gcd = n;
    }
    else{
        gcd = m;
    }
    cout<<gcd<<endl;
    return 0;
}