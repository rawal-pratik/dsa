#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {
    int res = 0;
    int originalNumber = n;

    while(n){
        int digit = n%10;
        res = res*10 + digit;
        n = n/10;
    }

    return res==originalNumber;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}