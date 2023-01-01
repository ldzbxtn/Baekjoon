#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string c) {
    vector<int> answer;
    for(int i=0; i<c.size(); i++){
        if(c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9'||c[i]=='0') answer.push_back(c[i]-'0');
    }
    sort(answer.begin(), answer.end());
    return answer;
}