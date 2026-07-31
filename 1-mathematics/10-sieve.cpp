#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<bool> isPrime(n+1, true);
    
    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=i*i; j<n+1; j=j+i){
                isPrime[j] = false;
            }
        }
    }

    for(int i=2; i<n+1; i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }

    cout<<endl;

}


void solve2(int n){
    vector<bool> isPrime(n+1, true);
    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i; j<=n; j=j+i){
                isPrime[j]=false;
            }
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
        solve2(n);
    }

    return 0;
}