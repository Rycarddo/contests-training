/**
 *	author: rycarddo
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a, b, p = 0;
    
    cin >> n;
    
    vector<int> psg;
    
    while (n--) {
        
        cin >> a >> b;
        
        p = p - a + b;
        
        psg.push_back(p);
        
    }
    
    auto it = max_element(psg.begin(), psg.end());
    
    int max_psg = *it;
    
    cout << max_psg << "\n";

    return 0;
}
