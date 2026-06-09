#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int MOD = 1000000007;
const int N = 200000;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll open=0;
        ll close=0;
        for(ll i=0; i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
        }
        if(open==close){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}