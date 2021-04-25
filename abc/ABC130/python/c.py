W, H, x, y = list(map(int, input().split()))

candidate1 = [x*H, (W-x)*H]
candidate2 = [W*y, W*(H-y)]

if 0 in candidate1:
    min1 = -1
else: min1 = min(candidate1)

if 0 in candidate2:
    min2 = -1
else: min2 = min(candidate2)

max12 = max(min1, min2)

if min1 != min2:
    way = 0
else: way = 1

print(max12, way)