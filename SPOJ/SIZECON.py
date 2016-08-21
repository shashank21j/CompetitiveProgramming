#print reduce(lambda x,y:x+y,filter(lambda x:x>0,[input()for _ in range(input())]))
s=0
for _ in range(input()): 
 k=input()
 if k>0: s+=k
print s
