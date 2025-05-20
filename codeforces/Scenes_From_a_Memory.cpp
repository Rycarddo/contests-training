/**
 *	author: rycarddo
**/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int k;
        string s;
        cin >> k >> s;
        
        for (char c : s) {
            if (c == '1' || c == '4' || c == '6' || c == '8' || c == '9') {
                cout << 1 << "\n" << c << "\n";
                goto nextcase;
            }
        }
        
        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k; j++) {
                int num = (s[i] - '0')*10 + (s[j] - '0');
                if(!isPrime(num)) {
                    cout << 2 << "\n" << num << "\n";
                    goto nextcase;
                }
            }
        }
        
        nextcase:;
        
    }

    return 0;
}
