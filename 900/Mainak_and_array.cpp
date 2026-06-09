#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=a[n-1]-a[0];
        for(ll i=0;i<n;i++){
            ans=max(ans,a[i]-a[0]);
        }
        for(ll i=0;i<n-1;i++){
            ans=max(ans,a[n-1]-a[i]);
        }
        for(ll i=0;i<n-1;i++){
            ans=max(ans, a[i]-a[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}