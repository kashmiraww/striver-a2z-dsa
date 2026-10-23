#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;
    if(n==1 || n<0){
        cout<<"Not a Perfect Number"<<endl;
    }
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            sum += i;
            if(n/i!=n && i!=n/i) {
                sum += (n/i);
            }
        }
    }
    if(sum==n){
        cout<<"Perfect Number"<<endl;
    }else{
        cout<<"Not a Perfect Number"<<endl;
    }
    return 0;
}