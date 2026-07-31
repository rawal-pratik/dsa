#include <bits/stdc++.h>
using namespace std;

bool solve(string s, int l, int r) {
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return solve(s, l+1, r-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << solve(s,0,s.length()-1) << endl;
    }

    return 0;
}