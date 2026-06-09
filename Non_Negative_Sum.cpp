#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(),greater<>());

        int s = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (s + a[i] >= 0) {
                s += a[i];
                ans++;
            } else {
                break;
            }
        }

        cout << ans << endl;
    }
}