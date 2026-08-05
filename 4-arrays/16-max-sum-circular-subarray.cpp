#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int kadanes(vector<int>& arr){
    int res = arr[0];
    int curr = arr[0];

    for(int x=1; x<arr.size(); x++){
        curr = max(arr[x], curr+arr[x]);
        res = max(res, curr);
    }

    return res;
}

int solve(vector<int>& arr) {
    int normal_maxSum = kadanes(arr);
    if(normal_maxSum<0) return normal_maxSum;

    int totalsum = accumulate(arr.begin(), arr.end(), 0);
    for(int &x: arr){
        x = -x;
    }
    int minSum = kadanes(arr);
    int res = totalsum + minSum;
    return max(res, normal_maxSum);
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