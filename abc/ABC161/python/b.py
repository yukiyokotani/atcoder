N, M = map(int, input().split())
A = [int(x) for x in input().split()]

sum = sum(A) / (4 * M)
ans = 0
for i in A:
    if i >= sum:
        ans += 1
if ans >= M:
    print("Yes")
else:
    print("No")
