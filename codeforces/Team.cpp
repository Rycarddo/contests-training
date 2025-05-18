/**
 *	author: rycarddo
**/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a + b + c >= 2){
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}
