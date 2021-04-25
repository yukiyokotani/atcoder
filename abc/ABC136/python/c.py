N = int(input())
H = list(map(int, input().split()))

ans = 1
for i in reversed(range(1, N, 1)):
    if (H[i-1] - H[i]) == 1:
        H[i-1] -= 1
    if (H[i-1] - H[i]) > 1:
        print('No')
        ans = -1
        break
if ans == 1: print('Yes')