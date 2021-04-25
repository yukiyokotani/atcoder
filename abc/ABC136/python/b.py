N = int(input())

import math
order = int(math.log10(int(N)))
ans = 0

for i in range(order):
    if (i % 2) == 0:
        ans += 9 * 10 ** i

if (order % 2) == 0:
    a = N - 10 ** order
    ans += a + 1 

print(ans)