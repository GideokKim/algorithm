import sys

def is_palindrome(num):
    """주어진 숫자가 팰린드롬인지 확인하는 함수"""
    return str(num) == str(num)[::-1]

def generate_primes(limit):
    """에라토스테네스의 체를 사용하여 limit 이하의 모든 소수를 구하는 함수"""
    is_prime = [True] * (limit + 1)
    is_prime[0] = is_prime[1] = False  # 0과 1은 소수가 아님

    for num in range(2, limit + 1):
        if is_prime[num]:  # 소수이면 그 배수를 제거
            for multiple in range(num * num, limit + 1, num):
                is_prime[multiple] = False

    return [num for num, prime in enumerate(is_prime) if prime]

def find_smallest_prime_palindrome(n):
    """n 이상인 가장 작은 소수이면서 팰린드롬인 숫자를 찾는 함수"""
    prime_list = generate_primes(1004)  # 1004 이하의 소수 미리 계산

    # n부터 시작하여 가장 작은 소수 & 팰린드롬 찾기
    num = n
    while True:
        if num == 1:  # 1은 소수가 아님
            num += 1
            continue
        if is_palindrome(num):
            # 미리 계산한 소수 리스트에서 찾거나, 직접 판별
            if num in prime_list or all(num % p != 0 for p in prime_list if p * p <= num):
                return num
        num += 1

# 입력 받기
n = int(sys.stdin.readline().strip())

# 결과 출력
sys.stdout.write(str(find_smallest_prime_palindrome(n)) + "\n")
