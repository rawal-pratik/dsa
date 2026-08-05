#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int solve(vector<int> arr){
    int can = arr[0];
    int count = 1;
    int n = arr.size();

    for(int i=1; i<n; i++){
        if(arr[i]==can){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            can = arr[i];
            count = 1;
        }
    }

    count = 0;

    for(int x:arr){
        if(x==can){
            count++;
        }
    }

    if(count>n/2){
        return can;
    }
    else return -1;
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