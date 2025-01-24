int solution(int n) {
    int answer = 0;
    int last_even = n / 2;
    answer = last_even * (last_even + 1);
    return answer;
}