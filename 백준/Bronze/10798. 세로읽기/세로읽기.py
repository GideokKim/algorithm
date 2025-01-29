import sys

words = [sys.stdin.readline().strip() for _ in range(5)]

for col in range(15):
    for row in range(5):
        if col < len(words[row]):
            sys.stdout.write(words[row][col])
