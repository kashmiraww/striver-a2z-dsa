#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int largest = 0;
    while(n>0){
        int lastdigit = n%10;
        if(lastdigit>largest){
            largest = lastdigit;
        }
        n /= 10;
    }
    cout<<largest<<endl;
    return 0;
}