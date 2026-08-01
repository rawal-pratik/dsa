#include <bits/stdc++.h>
using namespace std;

void solve(int n, char s, char a, char d) {
    if(n==1){
        cout<<s<<"-->"<<d<<endl;
        return;
    }
    solve(n-1, s, d, a);
    cout<<s<<"-->"<<d<<endl;
    solve(n-1, a, s, d);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        solve(n, 'a', 'b', 'c');
        cout<<endl;
    }

    return 0;
}