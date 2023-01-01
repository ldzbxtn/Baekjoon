#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    vector<int> arr(1000);
    for(int i=0; i<array.size(); i++){
        arr[array[i]]++;
    }
    int max = max_element(arr.begin(),arr.end())-arr.begin();
    int max_val = *max_element(arr.begin(),arr.end());
    arr[max] = 0;
    int max2 = max_element(arr.begin(),arr.end())-arr.begin();
    if(max_val == arr[max2]) return -1;
    return max;
}