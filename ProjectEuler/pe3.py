#/usr/bin/python
from math import *
n=600851475143
def factors(n):
    for i in range(2,int(sqrt(n))):
        if n%i==0:
            yield i
            while n%i==0:
                n/=i
for i in factors(n):
    i=i
print i

