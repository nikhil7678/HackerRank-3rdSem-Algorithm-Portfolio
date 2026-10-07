#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total = 0, mn = LLONG_MAX, mx = LLONG_MIN;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        total += x;
        mn = min(mn, x);
        mx = max(mx, x);
    }

    cout << total - mx << " " << total - mn << '\n';
    return 0;
}