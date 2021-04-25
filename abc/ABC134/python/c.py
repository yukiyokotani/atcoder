N=int(input())
A=[int(input()) for i in range(N)]
A_sub = A.copy()
MAX = max(A)
A_sub.remove(MAX)
MAX2 = max(A_sub)

for i in range(N):
    if A[i] < MAX:
        print(MAX)
    elif A[i] == MAX:
        print(MAX2)
    



    # # print(A[i])
    # A_sub2 = A_sub.copy()
    # A_sub2.remove(A[i])
    # print(A_sub2[0])
    
