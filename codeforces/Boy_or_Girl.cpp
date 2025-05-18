/**
 *	author: rycarddo
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
	cin >> s;
	
	set<char> p;
	
	for (int i = 0; i < s.size(); i++) {
	    char kyra = s[i];
	    p.insert(kyra);
	}
	
	cout << (p.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";

    return 0;
}
