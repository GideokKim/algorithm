import sys

t = int(sys.stdin.readline().strip())

results = []
for _ in range(t):
    A, B = map(int, sys.stdin.readline().split())
    results.append(A + B)

sys.stdout.write('\n'.join(map(str, results)))