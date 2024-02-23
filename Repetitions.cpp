#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    int maxi=0;
    int cnt=0;
    for(int i=1; i<s.size(); i++){
       if(s[i]==s[i-1]){
       cnt++;
       maxi = max(cnt,maxi);
       }
       else cnt=0;
    }
    cout<<maxi+1<<endl;
     
    return 0;
}