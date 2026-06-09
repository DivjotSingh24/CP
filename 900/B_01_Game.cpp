#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		string s;
        cin>>s;
        int count_zeroes=0;
        int count_ones=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')
                count_zeroes++;
            if(s[i]=='1')
                count_ones++;
        }
        int ops = min(count_zeroes,count_ones);
		if (ops % 2 != 0)
			cout << "DA" << endl;
		else
			cout << "NET" << endl;
	}
	return 0;
}
