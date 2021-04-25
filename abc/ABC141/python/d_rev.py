import numpy as np
import math

N, M = map(int, input().split())
A = list(map(int, input().split()))
A = np.array(A)
A_ix = A.argsort()[::-1]

for i in range(M):
    if(A[A_ix[0]] > A[A_ix[1]]):
        A[A_ix[0]]  =  math.floor(A[A_ix[0]] / 2)
    else:
        A_ix = A.argsort()[::-1]
        A[A_ix[0]]  =  math.floor(A[A_ix[0]] / 2)

print(A.sum())
