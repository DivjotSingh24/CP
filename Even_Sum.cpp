#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        bool can=false;
        for(int x:a){
            if((sum-x)%2==0){
                can=true;
                break;
            }
        }
        if(can){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
