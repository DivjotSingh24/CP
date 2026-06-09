#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> cnt(n + 1, 0);
        for (int i : a)
        {
            cnt[i]++;
        }
        vector<int> ans;
        int there = 0;
        
        for (int i = 0; i <= n; ++i) {
            int q = cnt[i];
            int x = i - there;
            ans.emplace_back((x > q) ? x : q);
            there += (cnt[i] > 0);
        }

        for (auto it = ans.begin(); it != ans.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}