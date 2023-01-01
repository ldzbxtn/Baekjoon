#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);
    int VMAX, VMIN, HMAX, HMIN;
    VMAX = board[1]/2;
    VMIN = -VMAX;
    HMAX = board[0]/2;
    HMIN = -HMAX;
    
    for(int i=0; i<keyinput.size(); i++){
        if(keyinput[i] == "left"){
            answer[0] -= 1;
            if(answer[0]<HMIN) answer[0] = HMIN;
        }
        else if(keyinput[i] == "right"){
            answer[0] += 1;
            if(answer[0]>HMAX) answer[0] = HMAX;
        }
        else if(keyinput[i] == "up"){
            answer[1] += 1;
            if(answer[1]>VMAX) answer[1] = VMAX;
        }
        else if(keyinput[i] == "down"){
            answer[1] -= 1;
            if(answer[1]<VMIN) answer[1] = VMIN;
        }
    }
    return answer;
}