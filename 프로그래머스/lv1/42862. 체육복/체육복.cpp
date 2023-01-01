#include <string>
#include <vector>
#include <iostream>
using namespace std;
void printv(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i];
    }
    cout << "\n";
}
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> arr(n+1, 1);
    for(int i=0; i<reserve.size(); i++) arr[reserve[i]]++;
    for(int j=0; j<lost.size(); j++) arr[lost[j]]--;
    printv(arr);
    for(int k=1; k<n+1; k++){
        if(arr[k]==2){
            if(arr[k-1]==0) arr[k-1] = 1;
            else if(arr[k+1]==0) arr[k+1] = 1;
        }
    }
    printv(arr);
    for(int k=1; k<n+1; k++){
        if(arr[k]!=0) answer++;
    }
    return answer;
}