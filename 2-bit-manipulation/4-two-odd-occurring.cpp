#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int n) {
    int res1 = 0, res2 = 0, x = 0;
    for(auto i: arr){
        x = x^i;
    }
    int differenceBit = x & ~(x-1);
    for(auto i: arr){
        if(i&differenceBit){
            res1 = res1 ^ i;
        }
        else{
            res2 = res2 ^ i;
        }
    }
    cout<<res1<<" "<<res2<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        solve(arr,n);
    }

    return 0;
}