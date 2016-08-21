from __future__ import division
while(1):
    try:
        a, b = map(int, raw_input().split())
        print a,b,
        t = (43200*(86400-a))/abs(a-b)
        t %= 43200
        h = int(t/3600)
        m = int(round((t%3600)/60))
        if m == 60:
            h += 1
            m = 0
        h %= 12
        if h == 0:
            h = 12
        print str(h).zfill(2) + ":" + str(m).zfill(2)
    except:
        break
