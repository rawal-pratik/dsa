#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n==0) return 0;
    return n%10 + solve(n/10);
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