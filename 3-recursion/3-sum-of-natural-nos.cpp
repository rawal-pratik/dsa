#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n==1) return 1;
    return n + solve(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }

    return 0;
}