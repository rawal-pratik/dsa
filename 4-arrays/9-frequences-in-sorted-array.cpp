#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

void solve(vector<int>& arr) {
    if(arr.size()==0) return;
    int freq = 1;

    for(int i=1; i<arr.size(); i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            cout<<arr[i-1]<<" "<<freq<<endl;
            freq = 1;
        }
    }
    cout<<arr[arr.size()-1]<<" "<<freq<<endl;
    cout<<"-----------------------------------";
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
        cout  << endl;
    }

    return 0;
}