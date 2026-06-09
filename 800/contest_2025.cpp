#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=0;
        for(char c:s){
            if(c=='Y') cnt++;
        }
        if(cnt>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        for(char c:s){
            assert(c=='s'||c=='u');
        }
        vector<int>pos;
        for(int i=0;i<n;i++){
            if(s[i]=='s'){
                pos.push_back(i);
            }
        }
        if(pos.size()<2){
            cout<<2-(int)pos.size()<<"\n";
            continue;
        }
        long long ans=0;
        ans+=pos[0];
        ans+=n-1-pos.back();
        for(int i=1;i<pos.size();i++){
            int gap=pos[i]-pos[i-1]-1;
            if(gap%2==0){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
