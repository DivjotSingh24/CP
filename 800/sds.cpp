#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n , x , y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long>first_third;
        for(int i=0;i<x;i++){
            first_third.push_back(a[i]);
        }
        for(int i=y;i<n;i++){
            first_third.push_back(a[i]);
        }
        int mini = INT_MAX;
        int min_ind = -1;
        for(int i=x;i<y;i++){
            if(a[i]<mini){
                min_ind = i;
                mini = a[i];
            }
        }
        int i=0;
        int m = first_third.size();
        while(i<m&&first_third[i]<a[min_ind]){
            cout<<first_third[i]<<" ";
            i++;
        }
        int j = min_ind;
        while(j<y){
            cout<<a[j]<<" ";
            j++;
        }
        j=x;
        while(j<min_ind){
            cout<<a[j]<<" ";
            j++;
        }
        while(i<m){
            cout<<first_third[i]<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}