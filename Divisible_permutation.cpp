#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans(n);
        for(int i=n-1,j=1;i>=0;i-=2){
            ans[i]=j;
            j++;
        }
        for(int i=n-2,j=n;i>=0;i-=2){
            ans[i]=j;
            j--;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}