using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = static_cast<long long>(count + 1);
    answer *= static_cast<long long>(count);
    answer /= 2;
    answer *= static_cast<long long>(price);
    answer -= static_cast<long long>(money);
    
    if (answer < 0) {
        answer = 0;
    }

    return answer;
}