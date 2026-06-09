#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        int p;
        cin >> p;
        p--;
        int pref = a[p];
        int l = 0, r = 0;

        for(int i = 0; i < p; i++) {
            if(a[i] != pref) {
                l++;
                while(i < p && a[i] != pref) i++;
                i--;
            }
        }
        for(int i = p + 1; i < n; i++) {
            if(a[i] != pref) {
                r++;
                while(i < n && a[i] != pref) i++;
                i--;
            }
        }
        cout << 2 * max(l, r) << endl;
    }
}