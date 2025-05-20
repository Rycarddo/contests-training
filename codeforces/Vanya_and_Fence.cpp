/**
 *	author: rycarddo
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, h;
    
    cin >> n >> h;
    
    int w = 0;
    
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        
        if (k > h) {
            w += 2;
        }
        else {
            w += 1;
        }
    }
    
    cout << w << "\n";

    return 0;
}
