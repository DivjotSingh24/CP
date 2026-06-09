#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n == 10) {
            cout << -1 << endl;
            continue;
        }
        ll r = n % 12;
        ll a=0;
        if (r <= 9){
            a = r;
        }
        else if (r == 10){
            a = 22;
        }
        else{
            a = 11;
        }

        cout << a << ' ' << (n - a) << endl;
    }

    return 0;
}