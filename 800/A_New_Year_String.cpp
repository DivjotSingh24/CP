#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; string s;
        cin>>n>>s;
        
        if(s.find("2026") != string::npos)
            cout << 0 << "\n";
        else if(s.find("2025") != string::npos)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}