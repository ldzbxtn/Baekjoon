#include <string>
#include <vector>

using namespace std;

int solution(string c) {
    int answer = 0;
    for(int i=0; i<c.size(); i++){
        if(c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9'){
            answer += int(c[i])-'0';
        }
    }
    return answer;
}