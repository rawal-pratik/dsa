#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k) {
    if(n==0) return 0;
    return (solve(n-1, k)+k)%n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }

    return 0;
}