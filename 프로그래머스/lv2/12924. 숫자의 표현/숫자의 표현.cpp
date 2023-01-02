#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum = 0;
    int temp;
    for(int i=1; i<=n; i++){
        sum += i;
        temp = sum;
        while(temp<=n){
            if(temp==n) answer++;
            temp += i;
        }
    }
    return answer;
}