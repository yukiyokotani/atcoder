from math import factorial
MOD = 10E9 + 7

n, a, b = map(int, input().split())
ans = 0
for i in range(n):
    if((i == a) or (i == b)):
        continue
    ans += factorial(n) / factorial(i) / factorial(n - i)
ans %= MOD
print(ans)
