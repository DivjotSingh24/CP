#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        ll tot = 0;
        ll xor_t = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tot += a[i];
            xor_t |= a[i];
        }

        if (tot == xor_t)
            cout << "Yes"<<endl;
        else
            cout << "No"<<endl;
    }

    return 0;
}