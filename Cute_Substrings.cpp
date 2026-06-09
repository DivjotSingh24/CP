#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            int l = 0;
            for (int j = i; j < n; j++) {
                int pos = j - i;
                if (pos % 2 == 0) {
                    if (s[j] == 'u' || s[j] == 'o') {
                        l++;
                    } else {
                        break;
                    }
                } else {
                    if (s[j] == 'w') {
                        l++;
                    } else {
                        break;
                    }
                }
                if (l % 2 == 1) {
                    maxi = max(maxi, l);
                }
            }
        }

        cout << maxi << endl;
    }
    return 0;
}