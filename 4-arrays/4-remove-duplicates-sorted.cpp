#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr, int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int solve(vector<int>& arr) {
    if (!arr.size()) return {};

    int res = 1;

    for(int x:arr){
        if(!(x==arr[res-1])){
            arr[res] = x;
            res++;
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

        n = solve(arr);
        printArray(arr, n);
    }

    return 0;
}