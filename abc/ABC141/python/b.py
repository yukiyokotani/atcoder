S = input()

odd = S[0::2]
even = S[1::2]

if((set(odd) <= {'R', 'U', 'D'}) and (set(even) <= {'L', 'U', 'D'})):
    print('Yes')
else: print('No')