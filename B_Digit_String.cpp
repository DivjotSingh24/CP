#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.size();
        vector<int> suffixOdd(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffixOdd[i] = suffixOdd[i + 1];

            if (s[i] == '1' || s[i] == '3')
                suffixOdd[i]++;
        }

        int evenPrefix = 0;
        int best = 0;
        for (int i = 0; i <= n; i++) {
            best = max(best, evenPrefix + suffixOdd[i]);
            if (i < n && s[i] == '2')
                evenPrefix++;
        }
        cout << n - best << endl;
    }

    return 0;
}