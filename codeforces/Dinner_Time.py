for _ in range(int(input())):
    n, m, p, q = map(int, input().split())
    if (n%p) == 0:
    	if (n/p) * q == m:
    		print("YES")
    	else:
    		print("NO")
    else:
    	print("YES")
