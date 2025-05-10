q = int(input()); height_arr = list(map(int, input().split())); count = 0;
max_height = max(height_arr); min_height = min(height_arr); idx_of_max = 0; idx_of_min = 0;

# taking the first index of the max height
for height in height_arr:
    if height == max_height:
        idx_of_max = height_arr.index(height)
        break
# taking the biggest index of the min height
idx_of_min = len(height_arr) - 1 - height_arr[::-1].index(min_height)

# Calculating the distance
if idx_of_max == 0 and idx_of_min == (len(height_arr) - 1):
    print(0)

elif idx_of_max < idx_of_min:
    count = idx_of_max + (len(height_arr) - idx_of_min - 1)
    print(count)

else:
    count = idx_of_max + (len(height_arr) - idx_of_min - 1) - 1
    print(count)
