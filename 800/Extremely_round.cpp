#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=0;
        long long base=1;
        while(base<=n){
            for(int i=1;i<=9;i++){
                if(i*base<=n){
                    ans++;
                }   
                else{
                    break;
                }
        }
            base=base*10;
        }
        cout<<ans<<endl;
    }
    return 0;
}





#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        bool possible = false;

        // try all k (where we go down)
        for (int k = 0; k < n; k++) {
            int prev = -1;
            bool ok = true;

            // go on top row from 0 to k
            for (int i = 0; i <= k; i++) {
                int x = a[i], y = b[i];

                int chosen = -1;
                if (x >= prev) chosen = x;
                if (y >= prev && (chosen == -1 || y < chosen)) chosen = y;

                if (chosen == -1) {
                    ok = false;
                    break;
                }
                prev = chosen;
            }

            if (!ok) continue;

            // go on bottom row from k to n-1
            for (int i = k; i < n; i++) {
                int x = a[i], y = b[i];

                int chosen = -1;
                if (x >= prev) chosen = x;
                if (y >= prev && (chosen == -1 || y < chosen)) chosen = y;

                if (chosen == -1) {
                    ok = false;
                    break;
                }
                prev = chosen;
            }

            if (ok) {
                possible = true;
                break;
            }
        }

        if (possible) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
