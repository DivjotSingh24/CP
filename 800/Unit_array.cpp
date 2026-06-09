#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pos=0;
        int neg=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                pos++;
            }
            else{
                neg++;
            }
        }
        int ans=0;
        //checking for sum
        if(pos<neg){
            int opn=(neg-pos+1)/2;
            ans+=opn;
            neg-=opn;
        }
        //checking for product
        if(neg%2==1){
            ans++;
        }

        //instead we can check once for whole
        // while (positive_count < negative_count || negative_count % 2 == 1)
        // {
        //     operations++; // Increment operations as we convert a -1 to 1
        //     positive_count++; // Increase count of +1s
        //     negative_count--; // Decrease count of -1s
        // }
        cout<<ans<<endl;
    }
    return 0;
}
