n = int(input())
words_stacks = []
results = []

for i in range(n):
    input_str = input().strip()
    words = input_str.split()
    words_stacks.append(words)

for i, words in enumerate(words_stacks):
    result = f"Case #{i+1}:"
    while words:
        result += f" {words.pop()}"
    results.append(result)

print("\n".join(results))
