N, X = list(map(int, input().split()))
L = list(map(int, input().split()))

# print(N, X)
# print(L)

ans = [0]
for i, v in enumerate(L):
    v_next = ans[i] + v
    ans.append(v_next)

#print(ans)

print(sum(i <= X for i in ans))