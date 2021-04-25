import numpy as np
import math
import heapq

N = int(input())
A = list(input().split())
A = [[int(A[i]),i+1] for i in range(N)]
heapq.heapify(A)

ans = []
for i in range(N):
    x = heapq.heappop(A)
    ans.append(x[1])

print(*ans)
