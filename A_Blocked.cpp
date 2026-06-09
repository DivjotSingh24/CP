#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.rbegin(),a.rend());
        bool pos=true;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) pos=false;
        }
        if(pos){
            for(auto &ele:a) cout<<ele<<" ";
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}