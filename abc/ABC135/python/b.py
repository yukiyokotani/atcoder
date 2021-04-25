N = int(input())
p = list(map(int, input().split()))
cnt = 0
l = list()

for i in range(N-1):
    if p[i] > p[i+1]:
        cnt += 1
        l.append(i)

if cnt > 2:
    print('NO')
if cnt == 1:
    print('NO')
if cnt == 0:
    print('YES')
if cnt == 2:
    p[l[0]], p[l[1]+1] = p[l[1]+1], p[l[0]]
    cnt = 0
    for i in range(N-1):
        if p[i] > p[i+1]:
            cnt += 1
            l.append(i)
    if cnt == 0:
        print('YES')
    else:
        print('NO')


# print(l)
# print(p[l[0]-1], p[l[1]+1], p[l[0]+1])
# print(p[l[1]], p[l[0]], p[l[1]+2])

