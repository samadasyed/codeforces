#include <bits/stdc++.h> 
using namespace std; 

typedef long long ll; 


int main () {
    cin.tie(0) -> sync_with_stdio(0);
    cin.exceptions(cin.failbit); 
    vector<vector<int>> arrays; 
    int numOfArrays; 
    cin >> numOfArrays; 
    for (int i = 0; i < numOfArrays; i++) {
        int n; 
        cin >> n; 
        vector<int> arr(n); 

    for (int j = 0; j < n; j++){
        cin >> arr[j]; 
    }
    arrays.push_back(arr);
    }
    for (const vector<int>& arr : arrays) {
        if (arr.size() < 3) {
            for (int x : arr) {
                cout << x << "\n"; 
            }
            continue;
        }
    }



    return 0; 
}