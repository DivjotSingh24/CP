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
        vector < ll > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector < int > wrong;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                wrong.push_back(i);
            }
        }
        bool can = true;
        for (int j = 1; j < (int) wrong.size(); j++) {
            if (wrong[j] == wrong[j - 1] + 1) {
                can = false;
                break;
            }
        }
        if (can) {
            int m = wrong.size();
            vector < ll > l(m), h(m);
            for (int idx = 0; idx < m; idx++) {
                int i = wrong[idx];
                l[idx] = (a[i] - a[i + 1] + 1) / 2;
                h[idx] = a[i];
                if (i > 0) {
                    h[idx] = min(h[idx], a[i] - a[i - 1]);
                }
                if (i + 2 < n) {
                    h[idx] = min(h[idx], a[i + 2] - a[i + 1]);
                }
            }
            for (int i = 0; i + 1 < m; i++) {
                if (wrong[i + 1] == wrong[i] + 2) {
                    int j = wrong[i];
                    ll buf = a[j + 2] - a[j + 1];
                    h[i] = min(h[i], buf - l[i + 1]);
                    h[i + 1] = min(h[i + 1], buf - l[i]);
                }
            }

            for (int i = 0; i < m; i++) {
                if (l[i] > h[i]) {
                    can = false;
                    break;
                }
            }
        }
        if (can) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}