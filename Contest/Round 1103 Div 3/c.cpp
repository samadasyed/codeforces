#include <bits/stdc++.h> 
using namespace std; 

typedef long long ll; 


int main () {
    cin.tie(0) -> sync_with_stdio(0);
    cin.exceptions(cin.failbit); 

    //3 integers a, b, x
    //You want to make a and b equal
    //Choose a or b and add 1 to it
    //Choose a or b and divide by x (rounding down)
    //Find minimum number of operations. 

    int t;
    cin >> t; 
    int a, b, x; 
    int ops; 
    vector<vector<int>> values; 
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> x;
        int combined = (a*100) + (b*10) + x;d
        values[i].push_back(combined);
    }
   
    for (int j = 0; j < values.size(); j++) {
         for (int i = 0; i < t; i++) {
            if (a == b) {
                cout << 0 << "\n"; 
                continue; 
            }
            if (x > a && b) {
                if (a > b) {
                    while (a > b) {
                        a+=1; 
                        ops++;
                    }
                    cout << ops << "\n"; 
                }
                if (a < b) {
                    while (a < b) {
                        b+=1; 
                        ops++; 
                    }
                    cout << ops << "\n"; 
                }
            }
            if ()
    }
    }
    return 0; 
}