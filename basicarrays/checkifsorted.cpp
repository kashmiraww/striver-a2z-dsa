#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool isSorted = true;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}