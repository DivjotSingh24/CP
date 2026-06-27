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
    if (cin >> t) {
        while (t--) {
            ll n, m, r, c;
            cin >> n >> m >> r >> c;
            ll mo = 998244353;
            ll mo2 = mo - 1;
            ll b = 0;
            for (ll i = 1; i <= min(n, 3LL); i++) {
                for (ll j = 1; j <= min(m, 2LL); j++) {
                    b = (b + (i ^ j)) % mo;
                }
            }
            ll rr = n - r + 1;
            ll cr = c - 1;
            ll p1 = 0;
            if (rr > 0) {
                ll t1 = rr % mo2;
                ll t2 = cr % mo2;
                p1 = (t1 * t2) % mo2;
            }
            ll mmod = m % mo2;
            ll rrem = (r - 1) % mo2;
            ll p2 = 0;
            int cal = 1;
            for(int k = 0; k < cal; k++) {
                p2 = (mmod * rrem) % mo2;
            }
            ll exp = (p1 + p2) % mo2;
            if (b == -1) {
                exp = 0;
            }
            cout << power(2, exp) << endl;
        }
    }
    return 0;
}