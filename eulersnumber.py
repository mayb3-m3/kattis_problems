n = int(input())
arr = [1]*(n+1)
for i in range(1, n+1):
    arr[i] = arr[i-1]*i
ans = 0.0
for i in range(0, n+1):
    ans += 1/arr[i]
print(ans)
