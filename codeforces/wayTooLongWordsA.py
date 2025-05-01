n = int(input())
 
for _ in range(n):
    word = input()
    if len(word) > 10:
        print(str(word[0]) + str(len(word) - 2) + str(word[len(word) - 1]))
    else:
        print(word)
