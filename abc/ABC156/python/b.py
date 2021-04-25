N, K = map(int, input().split())
ans = 0
while True:
    N /= K
    ans += 1
    if(N < 1):
        break
print(ans)
