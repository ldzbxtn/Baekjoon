#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if(price<100000) return price;
    else if(price<300000 && price>=100000) return price*0.95;
    else if(price<500000 && price>=300000) return price*0.9;
    else return price*0.8;
}