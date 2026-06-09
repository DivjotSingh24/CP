#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> a(7);
        int sum = 0, maxi = -1e9;
        for(int i = 0; i < 7; i++) {
            cin >> a[i];
            sum += a[i];
            maxi = max(maxi, a[i]);
        }
        cout << -sum + 2 * maxi <<endl;
    }
    return 0;
}