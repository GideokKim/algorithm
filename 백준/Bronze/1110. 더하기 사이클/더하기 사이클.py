import sys

target_number = int(sys.stdin.readline().strip())

n1 = target_number
index = 0

while index == 0 or n1 != target_number:
    a = n1 // 10
    b = n1 % 10
    n1 = b * 10 + (a + b) % 10
    index += 1

print(index)
