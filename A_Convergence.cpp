#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = n;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i]){
                j++;
            } 
            int l = i;      
            int r = n - j;

            ans = min(ans, max(l, r));
            i = j;
        }

        cout << ans << endl;
    }

    return 0;
}