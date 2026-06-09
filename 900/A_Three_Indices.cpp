#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        int flag = 0;
		for (int j = 1; j < n - 1; j++) 
		{
			int i = -1; 
			int k = -1; 
			for (int left = 0; left < j; left++) 
			{
				if (a[left] < a[j])
				{
					i = left;
					break;
				}
			}
			for (int right = j + 1; right < n; right++) 
			{
				if (a[right] < a[j])
				{
					k = right;
					break;
				}
			}
			if (i != -1 && k != -1) 
			{
				cout << "YES" << endl;
				cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
				flag = 1; 
				break;
			}
		}
		if (flag == 0)
			cout << "NO" << endl;

	}
	return 0;
}
