#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int ans = 0;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1])
                cnt++;
            else
                cnt = 1;

            if (cnt == 3) {
                ans++;
                cnt = 0; 
            }
        }
        cout << ans << endl;
    }
}