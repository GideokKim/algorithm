import sys

n, m = map(int, sys.stdin.readline().split())

matrix_a = []
for _ in range(n):
    row = list(map(int, sys.stdin.readline().split()))
    matrix_a.append(row)

for i in range(n):
    row_b = list(map(int, sys.stdin.readline().split()))
    for j in range(m):
        matrix_a[i][j] += row_b[j]

for row in matrix_a:
    sys.stdout.write(" ".join(map(str, row)) + "\n")