#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x, y, z;
        cin >> n >> x >> y >> z;
        ll no = (n + x + y - 1) / (x + y);

        ll yes;
        ll comp = x * z;

        if (comp >= n) {
            yes = (n + x - 1) / x;
        } 
        else {
            ll rem = n - comp;
            yes = z + (rem + (x + 10 * y) - 1) / (x + 10 * y);
        }

        cout << min(no, yes) << endl;
    }

    return 0;
}