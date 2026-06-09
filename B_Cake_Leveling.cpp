#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll p = 0;
        ll mini = LLONG_MAX;
        for (int i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            p += x;
            mini = min(mini, p / i);
            cout << mini;
            if (i < n) cout << ' ';
        }
        cout << endl;
    }

    return 0;
}