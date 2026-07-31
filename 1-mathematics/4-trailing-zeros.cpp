#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int res = 0;

    while(n){
        n=n/5;
        res += n;
    }

    return res;
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