#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    sort(array.rbegin(),array.rend());
    for(int i=0; i<array.size(); i++){
        if(array[i]<=height) break;
        answer++;
    }
    return answer;
}