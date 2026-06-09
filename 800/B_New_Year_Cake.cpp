#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long white = a, dark = b;

        long long layerSize = 1;
        int layers = 0;

        //starting with white
        long long w = white, d = dark;
        layerSize = 1;
        int count1 = 0;
        bool isWhite = true;

        while (true) {
            if (isWhite) {
                if (w < layerSize)
                    break;
                w -= layerSize;
            } else {
                if (d < layerSize)
                    break;
                d -= layerSize;
            }
            count1++;
            layerSize *= 2;
            isWhite = !isWhite;
        }

        //starting with dark
        w = white;
        d = dark;
        layerSize = 1;
        int count2 = 0;
        isWhite = false;

        while (true) {
            if (isWhite) {
                if (w < layerSize)
                    break;
                w -= layerSize;
            } else {
                if (d < layerSize)
                    break;
                d -= layerSize;
            }
            count2++;
            layerSize *= 2;
            isWhite = !isWhite;
        }

        cout << max(count1, count2) << "\n";
    }
}