n,x = [int(x) for x in raw_input().split()]
C = map(int,raw_input().split())
C.sort()
sum = 0 
for i in C:
    sum += x*i
    x-=1
print sum
