L, R = list(map(int, input().split()))
a = []
for i in range(R-L+1):
    #print(L+i)
    a.append((L+i)%2019)
a.sort()
print(a[0]*a[1])
