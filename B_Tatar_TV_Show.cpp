// unequal number of ones and zeroes + odd digits
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin>>s;
        vector<int> a(k);
        for(int i=0;i<n;i++){
            a[i%k]+=s[i]-'0';  //for converting into ascii values and adding 
        }
        bool valid=true;
        for(int i=0;i<k;i++){
            if(a[i]%2!=0){
                valid=false;
                break;
            }
        }
        cout<<(valid ? "YES" : "NO") << endl;
    }

    return 0;
}