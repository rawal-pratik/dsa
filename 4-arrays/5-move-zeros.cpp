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

    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=0){
            swap(arr[res],arr[i]);
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
        
        printArray(arr);
    }

    return 0;
}