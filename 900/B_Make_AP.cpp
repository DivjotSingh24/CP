#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        bool ans=false;
        ll new_a=2*b-c;
        if(new_a/a>0 && new_a%a==0){
            ans=true;
        }
        ll new_b=(a+c)/2;
        if(new_b/b>0 && new_b%b==0 && (c-a)%2==0){
            ans=true;
        }
        ll new_c=2*b-a;
        if(new_c/c>0 && new_c%c==0){
            ans=true;
        }
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}