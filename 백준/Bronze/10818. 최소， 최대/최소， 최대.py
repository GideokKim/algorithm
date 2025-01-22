import sys

N = int(sys.stdin.readline().strip())
numbers = list(map(int, sys.stdin.readline().strip().split()))

min_value = min(numbers)
max_value = max(numbers)

print(min_value, max_value)
