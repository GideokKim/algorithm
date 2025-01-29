import sys

while True:
    number = sys.stdin.readline().strip()
    if number == "0":
        break
    print("yes" if number == number[::-1] else "no")