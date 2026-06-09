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
        int n, x, s;
        cin >> n >> x >> s;
        string str;
        cin >> str;
        vector<int> dp(x + 1, -1);
        dp[0] = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            char ch = str[i];
            vector<int> ndp = dp;

            for (int tab = 0; tab <= maxi; tab++) {
                if (dp[tab] == -1) continue;
                int done = dp[tab];
                int remaining = tab * s - done;
                if ((ch == 'I' || ch == 'A') && tab < x){
                    ndp[tab + 1] = max(ndp[tab + 1], done + 1);
                }
                if ((ch == 'E' || ch == 'A') && remaining > 0){
                    ndp[tab] = max(ndp[tab], done + 1);
                }
            }
            if (ch == 'I' || ch == 'A') maxi = min(maxi + 1, x);
            dp = ndp;
        }
        int ans = 0;
        for (int i = 0; i <= maxi; i++)
            ans = max(ans, dp[i]);

        cout << ans << endl;
    }
    return 0;
}