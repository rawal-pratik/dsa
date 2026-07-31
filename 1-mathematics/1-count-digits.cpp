#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    int digits = 0;
    while(n){
        digits++;
        n/=10;
    }
    cout<<digits;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}