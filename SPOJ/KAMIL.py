#for _ in range(10): a=list(raw_input());print 2**(a.count('T')+a.count('D')+a.count('L')+a.count('F'))
for _ in range(10): print 2**len(filter(lambda x:x in 'TDLF',list(raw_input())))
