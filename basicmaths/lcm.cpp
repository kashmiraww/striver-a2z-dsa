#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
    int lcm, maxnum = max(m,n), i=1;
    while(1){
        int mult = maxnum*i;
        if(mult%m==0 && mult%n==0){
            lcm = mult;
            break;
        }
        i++;
    }
    cout<<lcm<<endl;
    return 0;
}