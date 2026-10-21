#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, rev = 0;
    cin>>n;
    int copy = n;
    while(n>0){
        int last = n%10;
        rev = (rev*10)+last;
        n /= 10;
    }
    if(copy==rev){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}

//number will be destroyed after the while loop, 
//so we need to make a copy of it to compare with the reversed number.