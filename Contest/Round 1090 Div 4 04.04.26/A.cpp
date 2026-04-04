#include <bits/stdc++.h> 

using namespace std; 

int main() { 
    int x; 
    cin >> x; 
    vector<int> store; 
    for (int i = 0; i < x; i++) {
        int y; 
        cin >> y;
        store.push_back(y);
        
    }
    for (int i = 0; i < x; i++) {
        cout << store[i]+1 << "\n"; 
    }
    
    return 0;
}