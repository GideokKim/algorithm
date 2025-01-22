hour, minute = map(int, input().split())

minute += int(input())
hour = (hour + minute // 60) % 24
minute %= 60

print(hour, minute)