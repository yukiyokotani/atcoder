N = int(input())
A = list(map(int, input().split()))
ans = 0

for v in A:
    ans += 1/v

print(1/ans)