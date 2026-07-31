#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int n) {
    int x = 1 << n;;
    for(int i=0; i<x; i++){
        for(int j=0; j<n; j++){
            if( (i & (1<<j)) ){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<"------------------------------------";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        solve(arr,n);
    }

    return 0;
}