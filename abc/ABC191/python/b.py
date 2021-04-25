n, x = map(int, input().split())
a_list = [int(a) for a in input().split()]
ans_list = []

for a in a_list:
    if a != x:
        ans_list.append(str(a))

print(*ans_list)