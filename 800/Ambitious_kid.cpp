#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long min_operations=INT_MAX;
    for(int i=0;i<n;i++){
        min_operations=min(min_operations,abs(a[i]));
    }
    cout<<min_operations<<endl;
    return 0;
}