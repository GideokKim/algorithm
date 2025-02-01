import sys

n = int(sys.stdin.readline().strip())
stack = []
results = []

for _ in range(n):
    command = sys.stdin.readline().strip().split()
    
    if command[0] == "1":
        stack.append(int(command[1]))
    elif command[0] == "2":
        results.append(stack.pop() if stack else -1)
    elif command[0] == "3":
        results.append(len(stack))
    elif command[0] == "4":
        results.append(0 if stack else 1)
    elif command[0] == "5":
        results.append(stack[-1] if stack else -1)

sys.stdout.write("\n".join(map(str, results)) + "\n")
