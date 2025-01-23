import sys

n, m = map(int, sys.stdin.readline().split())
buckets = list(range(1, n + 1))

for _ in range(m):
    left, right = map(int, sys.stdin.readline().split())
    buckets[left - 1:right] = reversed(buckets[left - 1:right])

print(" ".join(map(str, buckets)))