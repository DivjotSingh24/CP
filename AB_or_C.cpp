#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int,int>> v;
        v.reserve(3 * n);

        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            v.push_back({a, i});
            v.push_back({b, i});
            v.push_back({c, i});
        }

        sort(v.begin(), v.end());

        vector<int> cnt(n, 0);
        int covered = 0;
        int ans = INT_MAX;
        int l = 0;

        for (int r = 0; r < (int)v.size(); r++) {
            int row = v[r].second;
            cnt[row]++;
            if (cnt[row] == 1) covered++;

            while (covered == n) {
                ans = min(ans, v[r].first - v[l].first);
                int lrow = v[l].second;
                cnt[lrow]--;
                if (cnt[lrow] == 0) covered--;
                l++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}