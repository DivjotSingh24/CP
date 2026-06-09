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
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> p(n + 5, 0);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            p[a[i]] = 1;
        }
        ll tot = 0;
        for (ll i = 1; i <= n; i++) {
            if (p[i]){
                tot++;
            }
        }
        vector<ll> g(n + 3, 0), h(n + 3, 0);
        for (ll r = 1; r <= n; r++) {
            if (p[r] && p[r + 2]) g[r] = 1;
        }
        for (ll r = 1; r <= n; r++) {
            if (p[r - 1] && p[r + 1]) h[r] = 1;
        }

        vector<ll> is_g(n + 5, 0);
        vector<ll> is_h(n + 5, 0);
        vector<ll> is_both(n + 5, 0);
        for (ll i = n; i >= 1; i--) {
            is_g[i] = g[i] || is_g[i + 1];
            is_h[i] = h[i] || is_h[i + 1];
            is_both[i] = (g[i] && h[i]) || is_both[i + 1];
        }
        for (ll i = 1; i <= n; i++) {
            ll maxi = 0;
            if (i + 1 <= n && is_both[i + 1]) {
                maxi = 2;
            }
            else if (is_g[i] || (i + 1 <= n && is_h[i + 1])) {
                maxi = 1;
            }
            ll ans= tot-maxi;
            cout << ans << " ";
        }

        cout << endl;
    }

    return 0;
}