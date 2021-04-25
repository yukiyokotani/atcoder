N = int(input())
H = list(map(int, input().split()))

ans = 0
f_ans = 0

for i in range(N-1):
    if(H[i+1] <= H[i]):
        # print('True')
        ans += 1
    else:
        # print('False')
        if(ans >= f_ans):
            f_ans = ans
        ans = 0
    # print(i, H[i], ans)
if(ans >= f_ans):
    f_ans = ans
    ans = 0
print(f_ans)
    