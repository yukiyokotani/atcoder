import numpy as np
import math
H = int(input())

cnt = np.log2(H)
cnt = math.floor(cnt)
cnt = 2**(cnt + 1) - 1
print(cnt)