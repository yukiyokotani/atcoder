N, K = map(int, input().split())
h = [int(x) for x in input().split()]

ans = 0
for i in range(N):
    if(h[i]>=K):
        ans += 1

print(ans)