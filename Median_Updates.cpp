#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool alt = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == s[(i + 1) % n]) {
                alt = false;
                break;
            }
        }
        if (alt && n % 2 == 0){
            cout<<-1<<endl;
            continue;
        }
        int ans = 0, cur = 1;

        for (int i = 1; i <  n; i++) {
            if (s[i % n] != s[(i - 1) % n]) cur++;
            else {
                ans = max(ans, cur);
                cur = 1;
            }
        }

        ans = max(ans, cur);

        cout << (ans+1) / 2 << endl;
    }

}