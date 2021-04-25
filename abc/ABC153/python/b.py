H, N = map(int, input().split())
A = [int(x) for x in input().split()]

total = sum(A)
if(total >= H):
    print('Yes')
else:
    print('No')