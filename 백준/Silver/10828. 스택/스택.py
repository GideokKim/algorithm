import sys

n = int(sys.stdin.readline().strip())
stack = []
results = []

for _ in range(n):
    command = sys.stdin.readline().strip().split()
    
    if command[0] == "push":
        stack.append(int(command[1]))
    elif command[0] == "pop":
        results.append(stack.pop() if stack else -1)
    elif command[0] == "size":
        results.append(len(stack))
    elif command[0] == "empty":
        results.append(0 if stack else 1)
    elif command[0] == "top":
        results.append(stack[-1] if stack else -1)

sys.stdout.write("\n".join(map(str, results)) + "\n")

