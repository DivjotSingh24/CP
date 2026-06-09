#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll maxi=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i) continue;
                maxi=max(maxi,a[i]^a[j]);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}