#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

int solve(int a, int b) {
    return (a*b)/(gcd(a,b));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
}