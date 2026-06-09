#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int same=1;
        bool ok=true;
        for(int i=1;i<n;i++){
            if(a[i-1]==a[i]){
                same++;
            }
            else{
                same=1;
            }
            if(same>=m) {
                cout<<"NO"<<endl;
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}