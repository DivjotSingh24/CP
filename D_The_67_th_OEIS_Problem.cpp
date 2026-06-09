#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> primes;
    vector<bool> isprime(120000, true);
    isprime[0] = isprime[1] = false;
    for(int i = 2; i < 120000; i++){
        if(isprime[i]){
            primes.push_back(i);
            for(long long j = 1LL*i*i; j < 120000; j += i)
                isprime[j] = false;
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
            cout << 1LL * primes[i] * primes[i+1] << " ";
        cout << endl;
    }
    return 0;
}