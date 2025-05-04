n=int(input());
n+=1;
n=list(str(n));
while len(n) != len(set(n)):
    n=''.join(n);
    n=int(n);
    n+=1;
    n=str(n);
    n=list(n);
print(''.join(n));
# i know that it could be better lol and i'll try again
