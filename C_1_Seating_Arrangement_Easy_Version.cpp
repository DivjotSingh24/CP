#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, s;
        cin >> n >> x >> s;
        string str;
        cin >> str;
        vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
        dp[0][0] = 0;
        for (int i = 0; i < n; i++) {
            char ch = str[i];
            
            for (int tab = 0; tab <= x; tab++) {
                if (dp[i][tab] == -1) continue;
                
                int done = dp[i][tab];
                int remaining =tab * s - done; 
                dp[i + 1][tab] = max(dp[i + 1][tab], done);
                if ((ch == 'I' || ch == 'A') && tab < x){
                    dp[i + 1][tab + 1] = max(dp[i + 1][tab + 1], done + 1);
                }
                if ((ch == 'E' || ch == 'A') && remaining > 0){
                    dp[i + 1][tab] = max(dp[i + 1][tab], done + 1);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i <= x; i++)
            ans = max(ans, dp[n][i]);
        
        cout << ans << endl;
    }
    
    return 0;
}