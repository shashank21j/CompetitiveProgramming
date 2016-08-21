from string import *
def slug(s):
    s = s.strip()
    s = s.lower()
    s = s.replace(' ', '-')
    test = set(digits + ascii_letters)
    res = ""
    for i in s:
        if i in test or i == '-':
            res += i
    return res

for _ in range(input()):
    s = raw_input().split()
    i = s[0]
    s = '-'.join(s[1:])
    print i + "," + slug(s)
