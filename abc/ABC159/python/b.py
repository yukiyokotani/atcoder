S = input()
N = len(S)

ans = True


def rec(i, j):
    if(i >= j):
        return True
    if(S[i] != S[j]):
        return False
    return ans & rec(i+1, j-1)


ans1 = rec(0, N-1)
ans2 = rec(0, int((N-1)/2)-1)
ans3 = rec(int((N+3)/2)-1, N-1)
if(ans1 & ans2 & ans3):
    print("Yes")
else:
    print("No")
