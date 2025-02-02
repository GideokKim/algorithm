n = int(input())
bar_stack = []
count = 0
max_height = 0

for _ in range(n):
    bar_stack.append(int(input()))

while bar_stack:
    height = bar_stack.pop()
    if height > max_height:
        count += 1
        max_height = height

print(count)
