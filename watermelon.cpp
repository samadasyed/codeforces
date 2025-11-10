#include <bits/stdc++.h> 
using namespace std; 

typedef long long ll; 


int main () {
    cin.tie(0) -> sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int x; 
    cin >> x; 

    int y = x/4; 
    if (x % 2 == 0 && x!=2) {
        cout << "YES" << endl;
        return 0; 
    }
    else {
        cout << "NO" << endl;
        return 0; 
    }
    
}
