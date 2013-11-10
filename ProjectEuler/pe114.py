#!/usr/bin
global a
a=[0]*51
def f(m,n):
    solutions=1
    if (n>m):
        return solutions
    if a[m]!=0:
        return a[m]
    for startpos in range(0,m-n+1):
       # solutions+=1
        solutions += f(m-startpos - n,n)
    a[m]=solutions
    return solutions
t1=f(50,4)-1
a=[0]*51
t2=f(50,3)-1
a=[0]*51
t3=f(50,2)-1
print t1+t2+t3
