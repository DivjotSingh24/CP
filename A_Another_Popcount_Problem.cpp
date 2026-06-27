#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        ll can = k;
        ll c = 1;
        while (can > 0 && c <= n) {
            ll take = min(can, n / c);
            ans += take;
            n -= take * c;
            can = take;
            c <<= 1;
        }
        cout << ans << endl;
    }

    return 0;
}