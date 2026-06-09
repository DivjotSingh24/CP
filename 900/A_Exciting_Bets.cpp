#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll max_excitement=0;
        ll min_moves=0;
        if(a==b){
            cout<<max_excitement<<" "<<min_moves<<endl;
        }
        else{
            max_excitement=abs(a-b);
            min_moves = min(b % max_excitement, max_excitement - b % max_excitement);
            cout<<max_excitement<<" "<<min_moves<<endl;
        }
    }
    return 0;
}