#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

void reverse(vector<int>& arr, int l, int r) {
    while(l<=r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void solve1(vector<int>& arr, int d) {
    
    vector<int> temp;
    for(int i=0; i<d; i++){
        temp.push_back(arr[i]);
    }

    for(int i=d; i<arr.size(); i++){
        arr[i-d] = arr[i];
    }

    for(int i=0; i<d; i++){
        arr[arr.size()-d+i] = temp[i];
    }
}

void solve2(vector<int>& arr, int d) {
    reverse(arr, 0, d-1);
    reverse(arr, d, arr.size()-1);
    reverse(arr, 0, arr.size()-1);
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

        int d;
        cin>>d;

        solve2(arr, d);
        printArray(arr);
    }

    return 0;
}