#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int>ans;
        int i = 0;
        while(i<n&&a[i]<=0) i++;
        int prev = i-1;
        while(i<n){
            while(i<n&&a[i]>=0){
                i++;
            }
            ans.push_back(i - 1);
            if (prev != -1)
            {
                ans.push_back(prev);
            }
            while(i<n&&a[i]<0) i++;
            prev=i-1;
        }
        cout<<ans.size()<<endl;
        for(auto &x:ans) cout<<x+1<<" ";
        cout<<endl;
        
    }
    return 0;
}