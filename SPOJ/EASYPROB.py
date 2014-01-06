#/usr/bin/python
def fun(n):
    if n==0:
        return str(0)
    if n==1:
        return ''
    b=str(bin(n))[2:][::-1]
    t=[]
    for i in range(len(b)):
        if b[i]=='1':
            t.append(i)
    t.reverse()
    s=''
    for i in t:
        k1=fun(int(i))
        if k1:
            s=s+'2('+k1+ ')+'
        else:
            s=s+'2+'
    s=s[0:-1]
    return (s)
list=[137,1315,73,136,255,1384,16385]
for i in list:
    a=fun(i)
    print str(i)+'='+a 
