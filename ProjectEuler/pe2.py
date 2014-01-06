#/usr/bin/python
def fibo_gen(maxi=4000000):
    a,b=0,1
    while(a<maxi):
        yield a
        a,b=b,a+b
sig=0
for i in fibo_gen():
    if i%2==0:
        sig+=i
print sig
