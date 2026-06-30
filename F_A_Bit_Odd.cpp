#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int MOD = 1000000007;
const int N = 200000;

ll fact[N + 1], inv[N + 1], invFact[N + 1];

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
//this is my power template which helps to perform power fn
ll power(ll base, ll exp) {
    ll res = 1;
    ll mod = 998244353;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}
//ez for calc permutations, alg se code no need
long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int fone = -1, lzero = -1;
        for (int i = 0; i < n; i++){
            if (s[i] == '1'){ 
                fone = i; 
                break; 
            }
        }
        for (int i = n - 1; i >= 0; i--){
            if (s[i] == '0'){ 
                lzero = i; 
                break; 
            }
        }
        if (fone == -1 || lzero == -1 || fone > lzero){
            cout << "Bob" << endl;
            continue;
        }
        bool eve = true;
        int curr = 0;
        char check = s[fone];
        for (int i = fone; i <= lzero; i++){
            if (s[i] == check){
                curr++;
            }
            else{
                if (curr & 1){ 
                    eve = false; 
                    break; 
                }
                check = s[i];
                curr = 1;
            }
        }
        if (curr & 1){
            eve = false;   
        }
        if (eve){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }
    return 0;
}