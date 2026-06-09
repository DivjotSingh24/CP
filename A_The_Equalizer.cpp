#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int elem;
            cin >> elem;
            sum += elem;
        }

        if (sum % 2 == 1 || (n * k) % 2 == 0)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}