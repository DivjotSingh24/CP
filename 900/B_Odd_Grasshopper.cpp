#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll start,jumps;
        cin>>start>>jumps;
        ll final_pos;
        if(jumps%4==0) final_pos=0;
        else if(jumps%4==1) final_pos=-jumps;
        else if(jumps%4==2) final_pos=1;
        else if(jumps%4==3) final_pos=jumps+1;

        if(start%2==0) final_pos=start+final_pos;
        else final_pos=start-final_pos;
        cout<<final_pos<<endl;
    }
    return 0;
}