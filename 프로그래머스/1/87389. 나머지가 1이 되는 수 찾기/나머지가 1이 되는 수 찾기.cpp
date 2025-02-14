int solution(int n) {
    int answer = 2;
    int n_minus_one = n - 1;
    for (answer;answer <= n_minus_one; ++answer) {
        if (n_minus_one % answer == 0) {
            break;
        }
    }
    return answer;
}