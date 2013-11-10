import math
def is_square(apositiveint):
    x = apositiveint // 2
    seen = set([x])
    while x * x != apositiveint:
        x = (x + (apositiveint // x)) // 2
        if x in seen: return False
        seen.add(x)
    return True
n=10**6 
sum1=0
for b in range(2,10000,2):
    for c in range(b,100000,2):
        if b==0 and c==0: 
            continue
        t=b**2 + c**2 + (b**2)*(c**2)
        if t>10**12:
            break
        if (t%4!=0):
            continue
        t/=4
        if is_square(t):
            sum1+=int(math.sqrt(t))
            print b,c,math.sqrt(t),sum1
print sum1
