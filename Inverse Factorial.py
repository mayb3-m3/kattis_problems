import math
import sys
sys.set_int_max_str_digits(10**6)
target = math.log10(int(input()))
ans = 0.0
for i in range(1, 1000000):
    ans += math.log10(i)
    if(abs(ans-target) < 0.1):
        print(i)
        break
