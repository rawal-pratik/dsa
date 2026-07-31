#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n==1||n==0) return 1;
    int res = 1;

    for(int i=n; i>=2; i--){
        res *= i;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}