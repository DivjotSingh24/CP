#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		int count_0s = 0, count_1s = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0')
				count_0s++;
			else
				count_1s++;
		}

		int len_t = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '0' && count_1s > 0)
			{
				count_1s--;
				len_t++;
			}
			else if (s[i] == '1' && count_0s > 0)
			{
				count_0s--;
				len_t++;
			}
			else
			{
				break;
			}
		}
		cout << n - len_t << endl;
	}
	return 0;
}