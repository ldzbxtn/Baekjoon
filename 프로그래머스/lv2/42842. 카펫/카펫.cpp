#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x, y;
    for(int i=1; i<=2000000; i++){
        if(yellow%i==0){
            x = i;
            y = yellow/i;
            if(2*x+2*y+4 == brown) break;
        }
    }
    if(x>y){
        answer.push_back(x+2);
        answer.push_back(y+2);
    }
    else{
        answer.push_back(y+2);
        answer.push_back(x+2);
    }
        
    return answer;
}