#include <bits/stdc++.h>
using namespace std;

void solve(string s, int ind, string res) {
    if(ind == s.length()){
        cout<<res<<endl;
        return;
    }
    solve(s, ind+1, res+s[ind]);
    solve(s, ind+1, res); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        solve(s, 0, "");
        cout << endl;
    }

    return 0;
}