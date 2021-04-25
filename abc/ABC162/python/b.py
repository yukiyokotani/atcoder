N = int(input())
ans = 0
count = 1
while(count < N):
    if count % 3 != 0 and count % 5 != 0:
        ans += count
    count += 1
print(ans)
a
