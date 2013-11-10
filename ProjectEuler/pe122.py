#!/usr/bin
global a
def c(n):
    if n==1:
        return 1 
    if a[n]!=1:
        return a[n]
    min1=999999
    for i in range(1,n/2+1):
        if (c(i)+c(n-1))<min1:
            min1=c(i)+c(n-i)
    a[n]=min1
    return a[n]
a=[1]*500
print c(4)
