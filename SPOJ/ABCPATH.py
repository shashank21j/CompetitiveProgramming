global matrix,h,w,maxi,check
h,w = [int(x) for x in raw_input().split()] 
counter = 0
maxi = 0 
def process_matrix(x_y,s):
    global maxi
    if x_y[0]<(h-1) and matrix[x_y[0]+1][x_y[1]]==chr(ord(s)+1) and check[x_y[0]+1][x_y[1]]==0:
        process_matrix([x_y[0]+1,x_y[1]],chr(ord(s)+1))
    if x_y[0]>0 and matrix[x_y[0]-1][x_y[1]]==chr(ord(s)+1) and check[x_y[0]-1][x_y[1]]==0:
        process_matrix([x_y[0]-1,x_y[1]],chr(ord(s)+1))
    if x_y[1]<(w-1) and matrix[x_y[0]][x_y[1]+1]==chr(ord(s)+1) and check[x_y[0]][x_y[1]+1]==0:
        process_matrix([x_y[0],x_y[1]+1],chr(ord(s)+1))
    if x_y[1]>0 and matrix[x_y[0]][x_y[1]-1]==chr(ord(s)+1) and check[x_y[0]][x_y[1]-1]==0:
        process_matrix([x_y[0],x_y[1]-1],chr(ord(s)+1))
    if x_y[0]<(h-1) and x_y[1]<(w-1) and matrix[x_y[0]+1][x_y[1]+1]==chr(ord(s)+1) and check[x_y[0]+1][x_y[1]+1]==0:
        process_matrix([x_y[0]+1,x_y[1]+1],chr(ord(s)+1))
    if x_y[0]<(h-1) and x_y[1]>0 and matrix[x_y[0]+1][x_y[1]-1]==chr(ord(s)+1) and check[x_y[0]+1][x_y[1]-1]==0:
        process_matrix([x_y[0]+1,x_y[1]-1],chr(ord(s)+1))
    if x_y[0]>0 and x_y[1]>0 and matrix[x_y[0]-1][x_y[1]-1]==chr(ord(s)+1) and check[x_y[0]-1][x_y[1]-1]==0:
        process_matrix([x_y[0]-1,x_y[1]-1],chr(ord(s)+1))
    if x_y[0]>0 and x_y[1]<(w-1) and matrix[x_y[0]-1][x_y[1]+1]==chr(ord(s)+1) and check[x_y[0]-1][x_y[1]+1]==0:
        process_matrix([x_y[0]-1,x_y[1]+1],chr(ord(s)+1))
    if ord(s)-ord('A')+1>maxi:
        maxi = ord(s) - ord('A')+1
    check[x_y[0]][x_y[1]]=1
    return maxi
while h!=0 or w!=0:
    counter+=1
    matrix=[]
    tups = []
    check=[]
    for i in range(h):
        temp=[]
        st = list(raw_input())
        for j in range(w):
            temp.append(0)
            if st[j]=='A':
                tups.append([i,j])
        matrix.append(st)
        check.append(temp)
    maxj = 0
    maxi = 0
    for i in tups:
        maxi = process_matrix(i,'A')
        if maxi > maxj:
            maxj = maxi
    print "Case",str(counter)+":",maxj
    h,w = [int(x) for x in raw_input().split()]
