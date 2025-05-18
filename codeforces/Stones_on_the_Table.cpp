/**
 *	author: rycarddo
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    string colors;
    cin >> colors;
    
    int steps = 0;
    
    for (int i = 0; i < (colors.size() - 1); i++) {
        if (colors[i] == colors[i + 1]) {
            steps += 1;
        }
    }
    cout << steps << "\n";

    return 0;
}
