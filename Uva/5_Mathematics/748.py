# Why did you write this then? What technique is this?
while (1):
    try:
        a,b = input().split()
        b = int(b)
        a = list(a)
        flag = False
        if a[0] == '0':
            flag = True
        k = (len(a) - a.index('.') - 1)*b
        a.remove('.')
        a = ''.join(a)
        i1 = int(a)
        res = str(pow(i1,b))
        if flag == True:
            print('.' + (k - len(res))*'0' + res)
        else:
            int_part = res[0:-k]
            dec_part = res[-k:]
            cnt = 0
            temp = -1
            while dec_part[temp] == '0':
                cnt += 1
                temp-=1
            print (res[0:-k] + "." + str(dec_part)[:len(dec_part)-cnt])
    except:
        break

