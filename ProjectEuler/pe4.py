#/usr/bin/python
def palin(s):
    s=list(s)
    flag=0
    for i in range(len(s)/2):
        if s[i]!=s[0-1-i]:
            flag=1
            break
    if flag==0:
        return 1
    else:
        return 0
for i in range(999,900,-1):
    for j in range(999,900,-1):
        if palin(str(i*j)):
            print i,j,i*j
