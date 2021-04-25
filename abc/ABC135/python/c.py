N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

ans = 0

for i in range(N):
    r = A[i] - B[i]
    if r < 0:
        ans += min(-r, A[i+1])
        A[i+1] = max(A[i+1]+r, 0)
        ans += A[i]    
    else: ans += B[i]
        
print(ans)
