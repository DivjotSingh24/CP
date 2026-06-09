//logic would be that sbse pehle b timer ko min tk aane do then add the tools jbtk delay kr skte ho, keep in mind that add the tool with more than c at last taaki uski hi value add ho
//ans to this problem is [summation of i=1 to n(min(xi,a-1))] +b  where that 1 is basically the minimum c
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        long long max_time=b;
        for(int i=0;i<n;i++){
            max_time+=min(x[i],a-1);
        }
        cout<<max_time<<endl;
    }
    
    return 0;
}

