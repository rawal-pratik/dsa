#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int positive(int n){
    if(n>=0) return n;
    else return 0;
}

int solve(vector<int>& arr) {
    int res = 0;
    int n = arr.size();

    int l = 0;
    int r = n-1;

    int lmax = arr[l];
    int rmax = arr[r];

    while(l<r){
        if(lmax<=rmax){
            l++;
            lmax = max (lmax, arr[l]);
            res = res + (lmax - arr[l]);
        }
        else{
            r--;
            rmax = max (rmax, arr[r]);
            res = res + (rmax - arr[r]);
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