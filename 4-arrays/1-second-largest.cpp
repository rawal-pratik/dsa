#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int solve(vector<int>& arr) {
    if(!arr.size()) return -1;

    int largest = arr[0];
    int secondLargest = -1;

    for(auto x: arr){
        if(x>largest){
            secondLargest = largest;
            largest = x;
        }
    }

    return secondLargest;
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