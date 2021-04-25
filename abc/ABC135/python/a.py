A, B = list(map(int, input().split()))
ans = (A+B)/2
if ans.is_integer():
    print(int(ans))
else: print('IMPOSSIBLE')