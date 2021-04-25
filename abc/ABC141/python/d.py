import numpy as np
import math
import heapq

N, M = map(int, input().split())
A = list(map(lambda x: [-int(x),int(x)], input().split()))
heapq.heapify(A)

for i in range(M):
    x = heapq.heappop(A)
    x[1] //= 2
    x[0] = -x[1]
    heapq.heappush(A, x)

ans = 0
for i in range(N):
    ans += A[i][1]
print(ans)
