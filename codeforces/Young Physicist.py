n = int(input())
x = y = z = 0
for i in range(n):
    vector = map(int, input().split())
    vector = list(vector)
    x += vector[0]
    y += vector[1]
    z += vector[2]
 
if x == y == z == 0:
        print("YES")
else:
    print("NO")
