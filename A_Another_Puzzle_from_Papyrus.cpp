#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int MOD = 1000000007;
const int N = 200000;

ll fact[N + 1], inv[N + 1], invFact[N + 1];

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
//this is my power template which helps to perform power fn
ll power(ll base, ll exp) {
    ll res = 1;
    ll mod = 998244353;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
//ez for calc permutations, alg se code no need
long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n), b(n);
        ll diff = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            diff += (a[i] - b[i]); 
        }
        bool can = true;
        for (ll i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                can = false;
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool cans = true;
        for (ll i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                cans = false;
            }
        }
        if (can) {
            cout << diff << endl;
        } else if (cans) {
            cout << diff + c << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}