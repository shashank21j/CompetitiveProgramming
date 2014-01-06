while(1):
    n=int(input())
    if n==0:
        break
    string=input()
    row=len(string)//n
    t=[]
    for j in range(0,row):
        s1=[]
        for i in range(j*n,j*n+n):
            s1.append(string[i])
        if j%2==1:
            s1.reverse()
        t.append(s1)
    ans=[]
    for i in range(0,n):
        for j in t:
            ans.append(j[i])
    ans="".join(ans)
    print(ans)
