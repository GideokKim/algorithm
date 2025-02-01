import sys

t = int(sys.stdin.readline().strip())
results = []

for _ in range(t):
    input_str = sys.stdin.readline().strip()
    stack = []
    is_valid = True

    for c in input_str:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if not stack:
                is_valid = False
                break
            stack.pop()
    
    if stack:
        is_valid = False

    results.append("YES" if is_valid else "NO")

sys.stdout.write("\n".join(results) + "\n")
