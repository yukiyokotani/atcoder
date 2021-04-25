import random
import string
ascii_lowercase = 'abcdefghijk'

for i in range(10000):
    S = ''.join([random.choice(string.ascii_lowercase) for i in range(11)])

    #S = input()
    N = len(S)

    def rec(i, j):
        if(i >= j):
            return True
        if(S[i] != S[j]):
            return False
        rec(i+1, j-1)
        return True  # 到達しない

    ans1 = rec(0, N-1)
    ans2 = rec(0, int((N-1)/2)-1)
    ans3 = rec(int((N+3)/2)-1, N-1)
    # if(ans1 & ans2 & ans3):
    #     print("Yes")
    # else:
    #     print("No")
    Ans1 = ans1 & ans2 & ans3

    Ans2 = True
    for i in range(N // 2):
        if S[i] == S[i * (-1) - 1]:
            continue
        else:
            Ans2 &= False
    for i in range(N // 4):
        index = int(i * (-1) - 1 - (N-1)/2 - 1)
        if S[i] == S[index]:
            continue
        else:
            Ans2 &= False
    for i in range(N // 4):
        index = int(i + (N+3)/2-1)
        if S[index] == S[i * (-1) - 1]:
            continue
        else:
            Ans2 &= False

    if(Ans1 != Ans2):
        print("これが違う→", S)
