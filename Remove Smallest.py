t = int(input()) # number of test cases
for _ in range(t):
    n = int(input()) # array size
    arr = list(map(int, input().split())) # array
    arr = list(sorted(arr))
    for a, b in zip(arr, arr[1:]):
        if abs(a - b) > 1:
            print("NO")
            break
    else:
        print("YES")
