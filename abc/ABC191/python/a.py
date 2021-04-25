v, t, s, d = map(int, input().split());
canHit = True
if(v * t <= d & d <= v * s):
    canHit = False
print("Yes" if canHit else "No")