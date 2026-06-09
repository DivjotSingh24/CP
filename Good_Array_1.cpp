#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                bool has = false;
                for (int curr = j; curr <= i; curr++) {
                    int cnt = 0;
                    for (int check = j; check <= i; check++) {
                        if (a[curr] == a[check]) cnt++;
                    }
                    if (cnt == 1) {
                        has = true;
                        break;
                    }
                }
                if (!has) {
                    ans++;
                    // a[i] = i*100; 
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}