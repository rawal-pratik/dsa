#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int solve(vector<int>& arr) {
    int res = 0;
    int n = arr.size();
    int curr = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            curr++;
            res = max(res, curr);
        }
        else{
            curr = 0;
        }
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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << solve(arr) << endl;
    }

    return 0;
}