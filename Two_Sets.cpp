#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int,int> pi;

#define fr     first
#define sc     second
#define pb     push_back
#define pob    pop_back
#define pf     push_front
#define pof    pop_front

#define rep(i,a,b) for (int i = a; i <= b; i++)
// for (int i = 1; i <= n; i++) { }
//rep(i,1,n) { }

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

void solve() {
    ll n;
    cin>>n;
    ll p=n;
    ll sum=(n*(n+1))/2;
    unordered_set<ll>st;
    ll hf=sum/2;
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        while(hf>n){
            st.insert(n);
            hf-=n;
            n--;
        }
        st.insert(hf);
        cout<<st.size()<<endl;
        for(auto x:st){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<p-st.size()<<endl;
        for(int i=1; i<=n; i++){
            if(st.find(i)==st.end()){
               cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
    
}