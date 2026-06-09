#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p;
        cin >> n >> p;
        vector<pair<ll, ll>> v(n);
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
            v[i] = {b[i], a[i]};

        sort(v.begin(), v.end());

        ll mini = p;
        ll visited = 1;

        for (auto it : v)
        {
            ll can = it.second;
            ll sharing_cost = it.first;

            if (sharing_cost >= p)
                break;

            if (visited + can > n)
            {
                mini += (n - visited) * sharing_cost;
                visited = n;
                break;
            }
            else
            {
                mini += can * sharing_cost;
                visited += can;
            }
        }

        mini += (n - visited) * p;
        cout << mini << endl;
    }
    return 0;
}