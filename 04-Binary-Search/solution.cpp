#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& a, int target) {
    int left = 0, right = static_cast<int>(a.size()) - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target) return mid;
        if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    cin >> target;
    cout << binarySearch(a, target) << '\n';

    return 0;
}