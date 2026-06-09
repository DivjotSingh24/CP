#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int m = n - k;
        int pos = (m + 1) / 2; 
        int end = k + pos - 1;
        vector<int> ans;
        for (int i = pos-1; i <= end; i++) {
            if (i == pos-1 || a[i] != a[i - 1]) {
                ans.push_back(a[i]);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}