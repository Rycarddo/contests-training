n=input()
size=len(n)
binaryNumber = ''
while n:
    if n[0] == '.':
        binaryNumber+='0'
        n=n[1:]
    elif n[:2] == '-.':
        binaryNumber+='1'
        n=n[2:]
    elif n[:2] == '--':
        binaryNumber+='2'
        n=n[2:]
print(binaryNumber)