#include <bits/stdc++.h>
using namespace std;

int solve(int base, int power) {
    int res = 1;

    while(power){
        if(power&1){
            res = res*base;
        }
        power = power>>1;
        base = base * base;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, n;
        cin >> a>> n;
        cout << solve(a, n) << endl;
    }

    return 0;
}