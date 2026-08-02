#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

void solve(vector<int>& arr) {
    int n = arr.size();
    int leader = arr[n-1];
    cout<<leader<<" ";
    for(int i=n-2; i>=0; i--){
        if(arr[i] > leader){
            leader = arr[i];
            cout<<leader<<" ";
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

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        solve(arr);
    }

    return 0;
}