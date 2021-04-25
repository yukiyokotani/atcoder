N = input()
str = str(N)
flag = False
for i in str:
    if i == '7':
        flag = True
        break
if flag:
    print("Yes")
else:
    print("No")
