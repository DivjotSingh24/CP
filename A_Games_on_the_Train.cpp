#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll mini=1e18;
        ll maxi=-1e18;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]);
        }
        cout << maxi-mini+1 << endl;
    }

    return 0;
}