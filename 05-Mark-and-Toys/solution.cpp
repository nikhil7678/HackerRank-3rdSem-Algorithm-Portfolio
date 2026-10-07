#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long budget;
    cin >> n >> budget;

    vector<long long> price(n);
    for (long long &p : price) cin >> p;

    sort(price.begin(), price.end());

    int count = 0;
    for (long long p : price) {
        if (p > budget) break;
        budget -= p;
        ++count;
    }

    cout << count << '\n';
    return 0;
}