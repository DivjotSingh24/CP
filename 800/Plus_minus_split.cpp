#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll sm=0;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                sm+=1;
            }
            else{
                sm-=1;
            }
        }
        cout<<abs(sm)<<endl;
    }
    return 0;
}