#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long mx = LLONG_MIN;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        long long h;
        cin >> h;

        if (h > mx) {
            mx = h;
            count = 1;
        } else if (h == mx) {
            ++count;
        }
    }

    cout << count << '\n';
    return 0;
}