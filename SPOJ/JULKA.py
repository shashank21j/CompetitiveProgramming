#/usr/bin/python
for i in range(0,10):
    n=input()
    m=input()
    n=int(n)
    m=int(m)
    if n%2==1:
        n1=n//2+m//2+1
        n2=n-n1
    elif n%2==0:
        n1=n//2+m//2
        n2=n-n1
    print(n1)
    print(n2)
