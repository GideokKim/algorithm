t = int(input())

for _ in range(t):
    numbers = list(map(int, input().split()))
    
    total = 0
    minimum = 101

    for number in numbers:
        if number % 2 == 0:
            total += number
            minimum = min(minimum, number)
    
    print(total, minimum)
