import sys
input = sys.stdin.read
data = input().splitlines()
for line in data:
    n, k = map(int, line.split())
    vtr = [1] * n
    for i in range(1, n):
        vtr[i] = vtr[i - 1] * i
    ans = [i for i in range(1, n + 1)]
    a, b = 0, n - 1
    while k > 0:
        t = k // vtr[b]
        for i in range(a + t, a, -1):
            ans[i], ans[i - 1] = ans[i - 1], ans[i]
        k -= t * vtr[b]
        a += 1
        b -= 1
    print(" ".join(map(str, ans)))
