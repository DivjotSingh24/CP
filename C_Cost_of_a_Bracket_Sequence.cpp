#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int MOD = 1000000007;
const int N = 200000;

long long fact[N + 1], inv[N + 1], invFact[N + 1];

void precompute()
{
    fact[0] = inv[1] = fact[1] = invFact[0] = invFact[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
        inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;
        invFact[i] = invFact[i - 1] * inv[i] % MOD;
    }
}
long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;
            string s;
            cin >> s;
            vector<bool> del(n, false);
            for (int iter = 0; iter < k; iter++) {
                vector<pair<char, int>> a;
                for (int i = 0; i < n; ++i) {
                    if (!del[i]) {
                        a.push_back({s[i], i});
                    }
                }
                int m = a.size();
                if (m == 0) break;
                vector<int> st;
                vector<int> match(m, -1);
                int last = -1;
                for (int i = 0; i < m; i++) {
                    if (a[i].first == '(') {
                        st.push_back(i);
                    } else {
                        if (!st.empty()) {
                            int open = st.back();
                            st.pop_back();
                            match[open] = i; 
                            match[i] = open; 
                        } 
                        else {
                            last = i;
                        }
                    }
                }
                int fOpen = m;
                if (!st.empty()) {
                    fOpen = st.front();
                }
                int rem = -1;
                for (int i = 0; i < m; i++) {
                    if (match[i] != -1) {
                        if (a[i].first == '(' && i < fOpen) {
                            rem = a[i].second;
                            break;
                        }
                        if (a[i].first == ')' && i > last) {
                            rem = a[i].second;
                            break;
                        }
                    }
                }
                if (rem != -1) {
                    del[rem] = true;
                } else {
                    break;
                }
            }
            for (int i = 0; i < n; i++) {
                if(del[i]){
                    cout << '1';
                }
                else{
                    cout << '0';
                }
            }
            cout << endl;
        }
    }
    return 0;
}