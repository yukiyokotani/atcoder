n, k = list(map(int, input().split()))
lim = 10**9 + 7
C = [[1], [1,1]]

for i in range(2, n+10):
    C.append([1] + [(C[i-1][j-1] + C[i-1][j])%lim for j in range(1, i)] + [1])

for i in range(1, k+1):
    if n-k+1 < i  or k < i:
        #赤ボールが操作回数よりも少ない時、青ボールが操作回数よりも少ない時
        print(0)
    else:
        #青ボールを入れる箇所の組み合わせ×各箇所に入れる青ボール個数の組み合わせ
        print((C[n-k+1][i]*C[k-1][i-1])%lim)