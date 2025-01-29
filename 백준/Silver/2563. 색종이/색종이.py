import sys

drawing_paper = [[0] * 100 for _ in range(100)]

n = int(sys.stdin.readline())

for _ in range(n):
    x, y = map(int, sys.stdin.readline().split())
    for i in range(x, x + 10):
        for j in range(y, y + 10):
            drawing_paper[i][j] = 1

area = sum(sum(row) for row in drawing_paper)

print(area)