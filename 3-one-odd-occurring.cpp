#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>arr, int n) {
    int res = 0;
    for(auto& x : arr){
        res = res ^ x;
    }
    return res;
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
        cout<<solve(arr,n)<<endl;
    }

    return 0;
}