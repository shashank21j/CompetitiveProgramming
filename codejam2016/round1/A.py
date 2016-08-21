cnt = 1
for _ in range(input()):
    st = list(raw_input())
    res = ""
    for i in st:
        if len(res) == 0 or i < res[0]:
            res += str(i)
        elif i >= res[0]:
            res = str(i) + res
    print "Case #" + str(cnt) +": " +res
    cnt+=1
