#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int i = 1;
    for(; i*i<n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(; i>=1; i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}