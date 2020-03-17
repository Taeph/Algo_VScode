/*
 *  2019-10-25 (금)
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int num , count=0 , temp=0;
    
    cin >> num;
    // 1 부터 num 까지의 숫자들을 차례대로 빼주면서 count를 +1
    // 0보다 작아지는 경우 작아진 만큼의 자연수를 더해주고 그 다음 수를 빼주면 되기 때문에, count -1 
    for(int i=1; i<=num; i++) {
        temp = temp + i;
        count = i;

        if(temp > num) {
            count -= 1;
            break;
        } else if(temp == num){
            break;
        }
    }
    cout << count << endl;
}