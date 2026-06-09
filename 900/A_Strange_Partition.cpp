#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x;
        cin>>x;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll maxi=0;
        ll mini=0;
        for(ll i=0;i<n;i++){
            maxi+=ceil(a[i]*1.0/ x);
            mini += a[i];
        }
        mini = ceil(mini*1.0/ x);
        cout << mini << " " << maxi << endl;
    }
    return 0;
}