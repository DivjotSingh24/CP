#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count_zeroes=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count_zeroes++;
            }
        }
        bool found=false;
        int l=0, r=n-1;
        while(a[l]==0){
            l++;
        }
        while(a[r]==0){
            r--;
        }
        for(int i=l;i<r;i++){
            if(a[i]==0){
                found=true;
            }
        }
        if(count_zeroes==n){
            cout<<0<<endl;
        }
        else if(found==false){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}