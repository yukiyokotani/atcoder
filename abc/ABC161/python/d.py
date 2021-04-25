import heapq
K = int(input())
l = [i + 1 for i in range(0, 9)]
heapq.heapify(l)
count = 1
ans = 0
while count < K:
    x = heapq.heappop(l)
    l_digit = x % 10
    if l_digit != 0:
        heapq.heappush(l, 10 * x + l_digit - 1)
    heapq.heappush(l, 10 * x + l_digit)
    if l_digit != 9:
        heapq.heappush(l, 10 * x + l_digit + 1)
    count += 1
print(heapq.heappop(l))
