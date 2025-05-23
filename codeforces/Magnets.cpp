#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, groups = 1;
	cin >> n;
	
	int prev = 0, curr = 0;
	
	cin >> prev;
	
	for (int i = 1; i < n; i++) {
	    
	    cin >> curr;
	    
	    if (prev != curr) {
	        groups++;
	        prev = curr;
	    }
	    
	}
	    
	    
	
	cout << groups << "\n";

}
