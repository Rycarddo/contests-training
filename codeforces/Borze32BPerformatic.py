n=input(); r=[]; i=0
while i < len(n):
    if n[i] == '.':
        r.append("0"); i+=1
    elif n[i:i+2] == '-.':
        r.append("1"); i+=2
    elif n[i:i+2] == '--':
        r.append("2"); i+=2
print(''.join(r))