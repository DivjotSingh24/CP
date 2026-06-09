#include<bits/stdc++.h>
using namespace std;
int main(){
    using ll= long long;
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll min_sum= (k*(k+1))/2;
        ll max_sum=0;
        for(ll i=n-k+1; i<n+1;i++){
            max_sum+=i;
        }
        if(min_sum<=x && x<=max_sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}