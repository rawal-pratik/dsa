#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int k) {
    return ((n>>k-1)&1);
}

bool solve2(int n, int k) {
    return (n&(1<<(k-1)));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << solve2(n,k) << endl;
    }

    return 0;
}