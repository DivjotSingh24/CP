#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long opns=INT_MAX;
        for(int i=0;i<n-1;i++){  //n-1 in order to prevent it from going out of bound as we are testing for pairs
            if(a[i]<=a[i+1]){
                long long diff=a[i+1]=a[i];
                long long req_opns=diff/2 +1;
                opns=min(opns,req_opns);
            }
            else{
                opns=0;
            }
        }
        cout<<opns<<endl;
    }
    return 0;
}
