#/usr/bin/python
def check(s,s1):
    if(s=='+' and s1 in list('-*/^')):
        return -1
    elif(s == '-' and s1 in list('*/^')):
        return -1
    elif(s == '*' and s1 in list('/^')):
        return -1
    elif(s=='/' and s1 in list('^')):
        return -1
    else:
        return 1

def fun(s):
    stack=[]
    que=[]
    for i in s:
        if i in list('abcdefghijklmnopqrstuvwxyz'):
            stack.append(i)
        elif i in list('+-*/^'):
            if(que.count('+')==0 and que.count('-')==0 and que.count('*')==0 and que.count('/')==0 and que.count('^')==0):
                que.append(i)
            else:
                t1=check(i,que[-1])
                if(t1<=0):
                    stack.append(i)
                else:
                    que.append(i)
        elif i in list('('):
            que.append(i)
        elif i in list(')'):
            k=que.pop()
            while(k!='('):
                stack.append(k)
                k=que.pop()
    while(len(que)!=0):
        k=que.pop()
        stack.append(k)
    ans="".join(stack)
    print(ans)
    
n=raw_input()
n=int(n)        
for cnt in range(0,n):
    s=raw_input()
    fun(s)
