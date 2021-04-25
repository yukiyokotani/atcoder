N = int(input())
a = list(map(int, input().split()))
b = a.copy()

if set(a) <= {0,1}:
    for i in range(N//2, -1, -1):
        ball_sum = sum(b[i::i+1])
        if ball_sum % 2 == a[i]:
            continue
        else:
            b[i] = int(not(b[i]))
        
    print(sum(b))
    for j in range(N-1, -1, -1):
        if b[j]: print(j+1)

else: print(-1)