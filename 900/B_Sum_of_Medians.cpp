#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, k;
		cin >> n >> k; // 
		vector<long long> a(n * k); 
		for (int i = 0; i < n * k; i++) 
			cin >> a[i];
        ll pointer=n*k;
        ll ans=0;
        while(k--){
            pointer -= (n / 2 + 1);
            ans+=a[pointer];
        }
        cout<<ans<<endl;
	}
	return 0;
}
