numbers = [int(input()) for _ in range(9)]

maximum_value = max(numbers)
maximum_index = numbers.index(maximum_value) + 1

print(maximum_value)
print(maximum_index)