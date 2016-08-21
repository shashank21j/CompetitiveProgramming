for _ in range(input()):
    n=raw_input()
    si = n.count('6')
    ei = n.count('8')
    ni = n.count('9')
    te = n.count('0')
    print si+2*ei+ni+te

