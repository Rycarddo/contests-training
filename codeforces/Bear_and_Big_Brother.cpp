/**
 *	author: rycarddo
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    
    cin >> a >> b;
    
    int steps = 0;
    
    while (a <= b) {
        a *= 3;
        b *= 2;
        steps += 1;
    }
    
    cout << steps << "\n";

    return 0;
}
