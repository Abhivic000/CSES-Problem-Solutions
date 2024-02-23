#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n;
    cin>>n;
    long long sum=0;

    for(long long i=0; i<n-1; i++){
        long long a;
        cin>>a;
        sum+=a;
    }
    long long val = (n*(n+1))/2;
    cout<<val-sum<<endl;
     
    return 0;
}