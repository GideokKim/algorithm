import sys

burger = min(int(sys.stdin.readline()), int(sys.stdin.readline()), int(sys.stdin.readline()))
drink = min(int(sys.stdin.readline()), int(sys.stdin.readline()))

print(burger + drink - 50)