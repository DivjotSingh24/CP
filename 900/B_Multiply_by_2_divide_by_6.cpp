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
        ll cnt_twos=0;
        ll cnt_threes=0;
        while(n>0 && n%3==0){
            cnt_threes++;
            n/=3;
        }
        while(n>0 && n%2==0){
            cnt_twos++;
            n/=2;
        }
        if(n>1 || cnt_twos>cnt_threes){
            cout<<-1<<endl;
        }
        else{
            cout << cnt_threes + (cnt_threes - cnt_twos) << endl;
        }
	}
	return 0;
}
