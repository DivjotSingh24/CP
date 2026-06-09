#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll wrong=0;
        ll n=s.size();
        // ll cnt_a=0;
        // ll cnt_b=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                wrong++;
            }
        }
        if(wrong<=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}