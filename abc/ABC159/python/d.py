import sys
S = input()
N = len(S)

for i in range(N // 2):
    if S[i] == S[i * (-1) - 1]:
        continue
    else:
        print("No")
        sys.exit()
for i in range(N // 4):
    index = int(i * (-1) - 1 - (N-1)/2 - 1)
    if S[i] == S[index]:
        continue
    else:
        print("No")
        sys.exit()
for i in range(N // 4):
    index = int(i + (N+3)/2-1)
    if S[index] == S[i * (-1) - 1]:
        continue
    else:
        print("No")
        sys.exit()
print("Yes")
