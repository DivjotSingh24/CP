#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long number_is_present=0;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                number_is_present=1;
                break;
            }
        }
        if(number_is_present){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}