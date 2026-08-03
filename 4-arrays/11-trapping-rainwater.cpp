 #include <bits/stdc++.h>
 using namespace std;
 
 void printArray(const vector<int>& arr) {
     for (int x : arr) {
         cout << x << " ";
     }
     cout << endl;
 }
 
 int solve(vector<int>& arr) {
    int n = arr.size();

    vector<int> lmax(n);
    vector<int> rmax(n);

    for(int i=1; i<n; i++){
        lmax[i] = max(lmax[i-1], arr[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        rmax[i] = max(rmax[i+1], arr[i+1]);
    }

    int res = 0;

    for(int i=1; i<n-1; i++){
        res = res + min(lmax[i], rmax[i]) - arr[i];
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