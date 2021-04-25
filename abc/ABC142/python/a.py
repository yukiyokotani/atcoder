import math

N = int(input())
if(N%2==0):
    print(0.5)
else:
    print(math.ceil(N/2)/N)