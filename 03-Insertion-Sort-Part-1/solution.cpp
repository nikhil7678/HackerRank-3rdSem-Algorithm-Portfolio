#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int key = a[n - 1];
    int i = n - 2;

    while (i >= 0 && a[i] > key) {
        a[i + 1] = a[i];
        for (int x : a) cout << x << ' ';
        cout << '\n';
        --i;
    }

    a[i + 1] = key;
    for (int x : a) cout << x << ' ';
    cout << '\n';

    return 0;
}