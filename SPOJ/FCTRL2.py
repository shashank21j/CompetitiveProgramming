n=input()
n=int(n)
a=[0]
temp=1
for i in range(1,101):
  temp*=i
  a.append(temp)
for i in range(0,n):
  k=input()
  print a[int(k)]
