#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e6 + 10;
const int inf = 1e15;
const int mod = 998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> v(n);
        for (auto &xx : v) cin >> xx;

        vector<int> mid, ans;

        // Elements before x
        for (int i = 0; i < x; i++) {
            ans.push_back(v[i]);
        }

        // Elements after y-1
        for (int i = y; i < n; i++) {
            ans.push_back(v[i]);
        }

        // Elements from x to y-1
        for (int i = x; i < y; i++) {
            mid.push_back(v[i]);
        }

        if (!mid.empty()) {
            auto mn = min_element(mid.begin(), mid.end());
            rotate(mid.begin(), mn, mid.end());
        }

        int pos = ans.size();

        for (int i = 0; i < ans.size(); i++) {
            if (!mid.empty() && ans[i] > mid.front()) {
                pos = i;
                break;
            }
        }

        for (int i = 0; i < pos; i++) cout << ans[i] << ' ';
        for (int i = 0; i < mid.size(); i++) cout << mid[i] << ' ';
        for (int i = pos; i < ans.size(); i++) cout << ans[i] << ' ';

        cout << '\n';
    }

    return 0;
}