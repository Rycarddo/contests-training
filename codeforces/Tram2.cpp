/**
 *	author: rycarddo
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a, b, p = 0, max_psg = 0;
    
    cin >> n;
    
    while (n--) {
        
        cin >> a >> b;
        
        p = p - a + b;
        
        max_psg = max(max_psg, p);
        
    }
    
    cout << max_psg << "\n";

    return 0;
}
