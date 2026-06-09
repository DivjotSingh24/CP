//alternative approach could be just finding total and subtracting it from sum
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    long long sum = 0, x;

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }

    long long total = n * (n + 1) / 2;

    cout << total - sum;
}

// int main() {
//     long long n;
//     cin >> n;

//     vector<long long> a(n - 1);

//     for (long long i = 0; i < n - 1; i++) {
//         cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     // Case 1: missing 1
//     if (a[0] != 1) {
//         cout << 1;
//         return 0;
//     }

//     // FIX 2 + 3
//     for (long long i = 1; i < n - 1; i++) {
//         if (a[i] - a[i - 1] != 1) {
//             cout << a[i - 1] + 1;
//             return 0;
//         }
//     }

//     // Case 3: missing n
//     cout << n;

//     return 0;
// }

