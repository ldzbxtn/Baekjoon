#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int GCD = gcd(n,m);
    int LCM = n*m/GCD;
    answer.push_back(GCD);
    answer.push_back(LCM);
    return answer;
}