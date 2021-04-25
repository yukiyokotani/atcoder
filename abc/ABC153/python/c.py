N, K = map(int, input().split())
H = [int(x) for x in input().split()]

H.sort(reverse = True)
H = sum(H[K:])
print(H)
