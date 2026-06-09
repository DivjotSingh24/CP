#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;

        int combos = min(n, m);

        int ans = combos * c + (n - combos) * a + (m - combos) * b;

        cout << ans << endl;
    }
    return 0;
}