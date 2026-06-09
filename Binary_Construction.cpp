#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 2)
        {
            cout << "01" << endl;
        }
        // int x = (n + 1) / 2;
        // int x=n/2;

        // for (int i = 0; i < x; i++){
        //     ans += '0';
        // }
        // for (int i = x; i < n; i++){
        //     ans += '1';
        // } 
        else{
            string ans = "";
            ans+='0';
            for(int i=1;i<n-1;i++){
                ans+='1';
            }   
            ans+='0';
            cout << ans << endl;
        }
    }
    return 0;
}