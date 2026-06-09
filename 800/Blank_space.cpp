#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t; 
    while (t--) 
    {
        long long n; 
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        long long count_zeroes=0;
        long long max_zeroes=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count_zeroes++;
            }
            else{
                count_zeroes=0;
            }
            max_zeroes=max(max_zeroes,count_zeroes);
        }
        cout <<max_zeroes<<endl; 
    }
    return 0; 
}