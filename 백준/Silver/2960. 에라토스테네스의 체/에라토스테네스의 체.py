import sys

def sieve(n, k):
    A = [0] * (n + 1)
    count = 0
    result = 0
    
    for i in range(2, n + 1):
        A[i] = i

    # 에라토스테네스의 체
    for i in range(2, n + 1):
        if A[i] == 0:
            continue
        for j in range(i, n + 1, i):
            if A[j] != 0:
                count += 1
            if (count == k):
                print(A[j])
                return
            A[j] = 0

n, k = map(int, sys.stdin.readline().split())
sieve(n, k)
