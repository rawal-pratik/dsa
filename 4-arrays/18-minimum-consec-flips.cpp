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
    
    for(int i=1; i<n;){
        if(arr[i]!=arr[0]){
            res++;
            while(i + 1 < n && arr[i]==arr[i+1]){
                i++;
            }
        }
        i++;
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