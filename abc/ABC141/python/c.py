N, K, Q = map(int, input().split())
A = []
for _ in range(Q):
    A.append(int(input()))

P = []
for i in range(N):
    P.append(K - Q)

for i in range(Q):
    P[A[i]-1] += 1

for i in range(N):
    if(P[i] > 0): print('Yes')
    else: print('No')