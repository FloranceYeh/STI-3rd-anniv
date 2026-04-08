n = int(input())

a = [1, 1]
ans = 2

for i in range(2, n):
    a.append(a[i - 1] + a[i - 2])
    ans += a[i]

if n == 1:
    print(1)
else:
    print(ans)