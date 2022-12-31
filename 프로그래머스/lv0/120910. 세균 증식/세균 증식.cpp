#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    int p = pow(2, t);
    answer = n*p;
    return answer;
}