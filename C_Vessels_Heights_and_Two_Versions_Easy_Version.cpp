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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> ans(n);
        for (int k = 0; k < n; k++) {
            vector<ll> r(n+5, 0);
            ll curr = 0;
            for (int s = 1; s < n; s++) {
                int i = (k + s) % n;
                curr = max(curr, a[(i - 1 + n) % n]);
                r[i] = curr;
            }
            vector<ll> l(n+5, 0);
            curr = 0;
            for (int s = 1; s < n; s++) {
                int i = (k - s + n) % n;
                curr = max(curr, a[i]);
                l[i] = curr;
            }
            ll total = 0;
            for (int i = 0; i < n; ++i) {
                if (i != k) {
                    total += min(r[i], l[i]);
                }
            }
            ans[k] = total;
        }
        for (int i = 0; i < n; ++i) {
            if (i == n - 1) {
                cout << ans[i];       
            } 
            else {
                cout << ans[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}