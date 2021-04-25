N = int(input())
X = list(map(int, input().split()))

P1 = sum(X) // len(X)
P2 = -(-sum(X) // len(X))
ans1 = 0
ans2 = 0
for i in X:
    ans1 += (i - P1) ** 2
    ans2 += (i - P2) ** 2
print(min(ans1, ans2))
