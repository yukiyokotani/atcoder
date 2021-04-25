import math
K = int(input())
ans = 0
for i in range(1, K+1):
    for j in range(i, K+1):
        for k in range(j, K+1):
            if (i == j) and (j == k):
                ans += math.gcd(i, math.gcd(j, k))
            elif (i == j) or (j == k):
                ans += 3 * math.gcd(i, math.gcd(j, k))
            else:
                ans += 6 * math.gcd(i, math.gcd(j, k))
print(ans)
