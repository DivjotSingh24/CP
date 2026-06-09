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
        ll longest=1;
        ll curr=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                curr++;
            }
            else{
                longest=max(longest,curr);
                curr=1;

            }
        }
        longest=max(longest,curr);
        cout<<longest+1<<endl;
    }
    return 0;
}