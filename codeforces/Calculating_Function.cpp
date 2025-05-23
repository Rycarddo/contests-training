#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long n, res = 0;
	    
	cin >> n;
	
	// n is even
	
	if (n % 2 == 0) {
	    res = n / 2;
	    cout << res << "\n";
	}
	
	// n is odd
	
	else if (n % 2 != 0) {
	    n += 1;
	    res = (-1) * (n / 2);
	    cout << res << "\n";
	}
	
	

}
