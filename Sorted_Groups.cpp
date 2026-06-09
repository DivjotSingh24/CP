#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        multiset<char> mset(s.begin(), s.end());

        string ans(n, ' ');

        char last_a = 0;
        bool empty_a = true;

        for (int i = 0; i < n; i++) {
            char b_char = *mset.begin();

            if ((empty_a || s[i] >= last_a) && s[i] >= b_char) {
                ans[i] = s[i];
                mset.erase(mset.find(s[i]));
                last_a = s[i];
                empty_a = false;
            } else {
                ans[i] = b_char;
                mset.erase(mset.begin());
            }
        }

        cout << ans << endl;
    }

    return 0;
}