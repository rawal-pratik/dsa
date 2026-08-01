#include <bits/stdc++.h>
using namespace std;

int solve(int n, int a, int b, int c) {
    if(n==0) return 0;
    if(n<0) return -1;

    int x = solve(n-a,a,b,c);
    int y = solve(n-b,a,b,c);
    int z = solve(n-c,a,b,c);

    int res = max({x,y,z});

    if(res==-1) return -1;

    return 1 + res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        cout << solve(n, a, b, c) << endl;
    }

    return 0;
}