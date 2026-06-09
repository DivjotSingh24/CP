#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool cont_3_empty=false;
        int total_count_empty=0;

        for(int i=0;i<n;i++){
            if (s[i] == '.' && i+1<n &&s[i+1] == '.' &&i+2<n && s[i+2]=='.'){
                cont_3_empty=true;
                break;
            }
            if(s[i]=='.'){
                total_count_empty++;
            }
        }
        if(cont_3_empty)
            cout<<2<<endl;
        else
            cout<<total_count_empty<<endl;
    }
    return 0;
}