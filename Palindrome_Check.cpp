#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int i = 0, j = n - 1;
        bool can = true;

        while (i < j) {
            if (a[i] == a[j]) {
                i++;
                j--;
            } else if (a[i] == k) {
                i++;
            } else if (a[j] == k) {
                j--;
            } else {
                can = false;
                break;
            }
        }
        if(can){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}