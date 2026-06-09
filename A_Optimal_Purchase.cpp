#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int MOD = 1000000007;
const int N = 200000;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,g;
        cin>>n>>i>>g;
        ll ans=0;
        if(g<3*i){
            ans+=(n/3)*g;
            n%=3;
        }
        if(g<2*i){
            ans+=(n/2)*g;
            n%=2;
        }
        if(g<i){
            ans+=n*g;
        }
        else{
            ans+=i*n;
        }
        cout<<ans<<endl;
    }
    return 0;
}