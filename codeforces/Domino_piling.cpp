/**
 *	author: rycarddo
**/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n, s, r;
    cin >> m >> n;
    
    s = m * n;
    r = s / 2;

    cout << r << "\n";
    
    return 0;
}
