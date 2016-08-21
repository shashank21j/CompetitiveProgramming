def pow_mod(x, y, z):
    number=[[1,1],[1,0]]
    while y:
        if y & 1:
            number = matmult(number,x,z)
        y >>= 1
        x = matmult(x,x,z)
    return number

def matmult(a,b,m):
    zip_b = zip(*b)
    return [[sum(ele_a*ele_b for ele_a, ele_b in zip(row_a, col_b))%m for col_b in zip_b] for row_a in a]


a=[[1,1],[1,0]]
a1=a
t=input()
for i in range(t):
    n,m=[int(x) for x in raw_input().split()]
    print (pow_mod(a,m+2,1000000007)[1][1] - pow_mod(a,n+1,1000000007)[1][1])%1000000007

