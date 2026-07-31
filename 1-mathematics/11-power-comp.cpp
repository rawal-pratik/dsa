#include <bits/stdc++.h>
using namespace std;

int solve(int a, int x) {
    if(x==0) return 1;

    int temp = solve (a, x/2);
    temp = temp * temp;

    if(x%2==0){
        return temp;
    }
    else{
        return a*temp;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, x;
        cin >> a >> x;
        cout << solve(a, x) << endl;
    }

    return 0;
}