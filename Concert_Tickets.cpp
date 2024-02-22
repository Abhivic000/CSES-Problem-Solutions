#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

typedef vector<int> vi;
typedef pair<int,int> pi;

#define fr     first
#define sc     second
#define pb     push_back
#define pob    pop_back
#define pf     push_front
#define pof    pop_front

#define rep(i,a,b) for (ll i = a; i <= b; i++)
// for (int i = 1; i <= n; i++) { }
//rep(i,1,n) { }

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

void solve() {
    ll n, m;
    cin>>n>>m;
    multiset<ll>v;
    rep(i,0,n-1){
        ll pri;
        cin>>pri;
        v.insert(pri);
    }
    rep(i,0,m-1){
       ll val;
       cin>>val;
       auto it = v.upper_bound(val);
       if(it==v.begin()){
        cout<<-1<<endl;
        continue;
       }else{
        cout<<*(--it)<<endl;
        v.erase(it);
       }
    }

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
    
}