#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
    if(n==0) return;

    cout<<k;

    solve(n-1, k+1);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int k = 1;
        solve(n, k);
        cout<< endl;
    }

    return 0;
}