#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        vector<ll> dp(n + 2, 1e9);
        dp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            dp[i + 1] = min(dp[i + 1], dp[i] + (s1[i] != s2[i]));
            if (i + 1 < n)
            { 
                ll cost = (s1[i] != s1[i + 1]) + (s2[i] != s2[i + 1]);
                dp[i + 2] = min(dp[i + 2], dp[i] + cost);
            }
        }
        cout << dp[n] << endl;
    }
}