//check for last two digits, if they are in {00,25,50,75}, iterate backwards

#include<bits/stdc++.h>
using namespace std;
int min_operations(string n, string possible_value){
    int ops=0;
    int checker_index = possible_value.size() - 1; //start from last chr of  possible value
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==possible_value[checker_index]){
            checker_index--;
            if(checker_index<0){
                break;
            }
        }
        else{
            ops++;
        }
    }
    if(checker_index>=0){
        ops=INT_MAX;
    }
    return ops;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<string> possible_values= {"00", "25","50","75"};
        int ans=INT_MAX;
        for(auto possible_value : possible_values){
            ans=min(ans, min_operations(n, possible_value));
        }
        cout<<ans<<endl;
    }
    return 0;
}