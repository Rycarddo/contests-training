# inputs
n, t = list(map(int, input().split()))
array = list(input())
# loop t
for u in range(t):
    i=0 
    # loop to organize the queue
    while i < len(array) - 1:
        # analyzing in pairs
        if array[i] == 'B' and array[i+1] == 'G':
            array[i] = 'G' 
            array[i+1] = 'B'
            i+=2
        else:
            i+=1
print(''.join(element for element in array))