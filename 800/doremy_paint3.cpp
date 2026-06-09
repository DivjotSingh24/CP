#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<long long, long long> frequency_map;
        for(int i=0;i<n;i++){
            frequency_map[a[i]]++;
        }
        if(frequency_map.size()>=3){
            cout<<"No"<<endl;
        }
        else{
            long long f1 = frequency_map.begin()->second;   // first (smallest key)
            long long f2 = frequency_map.rbegin()->second; 

            if (f1 == f2)
                cout << "Yes" << endl;
            else if (n % 2 == 1 && abs(f1 - f2) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}