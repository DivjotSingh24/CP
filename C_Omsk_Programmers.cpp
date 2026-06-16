#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int MOD = 1000000007;
const int N = 200000;

long long fact[N + 1], inv[N + 1], invFact[N + 1];

void precompute()
{
    fact[0] = inv[1] = fact[1] = invFact[0] = invFact[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
        inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;
        invFact[i] = invFact[i - 1] * inv[i] % MOD;
    }
}
long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
ll cost( ll n, ll v, ll x){
    if(n<=v){
        return v - n;
    }
    ll d=0;
    ll m=n;
    while(m>v){
        m/=x;
        d++;
    }
    return d+(v-m);
}
int main(){
    int t;
    cin>> t;
    while(t--){
        ll a,b,x;
        cin>>a>>b>>x;
        vector<ll> can;
        ll m=a;
        while(true){
            can.push_back(m);
            if(m==0){
                break;
            }
            m/=x;
        }
        m=b;
        while(true){
            can.push_back(m);
            if(m==0){
                break;
            }
            m/=x;
        }
        ll ans=LLONG_MAX;
        for(ll v:can){
            ans=min(ans,cost(a,v,x)+cost(b,v,x));
        }
        cout<<ans<<endl;
    }
}