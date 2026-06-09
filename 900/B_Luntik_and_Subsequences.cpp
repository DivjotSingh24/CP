#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        ll count_zeroes=0;
        ll count_ones=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                count_zeroes++;
            }
            else if(a[i]==1){
                count_ones++;
            }
        }
        ll ans=count_ones * (pow(2,count_zeroes));
        cout<<ans<<endl;
    }
    return 0;
}