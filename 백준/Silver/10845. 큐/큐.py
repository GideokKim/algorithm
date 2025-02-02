import sys
from collections import deque

n = int(sys.stdin.readline().strip())
queue = deque()
results = []

for _ in range(n):
    command = sys.stdin.readline().strip().split()
    
    if command[0] == "push":
        queue.append(int(command[1]))
    elif command[0] == "pop":
        results.append(queue.popleft() if queue else -1)
    elif command[0] == "size":
        results.append(len(queue))
    elif command[0] == "empty":
        results.append(0 if queue else 1)
    elif command[0] == "front":
        results.append(queue[0] if queue else -1)
    elif command[0] == "back":
        results.append(queue[-1] if queue else -1)

sys.stdout.write("\n".join(map(str, results)) + "\n")
