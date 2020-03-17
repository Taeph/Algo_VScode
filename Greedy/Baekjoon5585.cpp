#include<iostream>
#include<algorithm>

using namespace std;

#define TOTAL 1000
#define MAX 6

int cArr[MAX] = {500, 100, 50, 10, 5, 1};

int main() {
    int temp, pay, count, newTemp, cnt = 0;
    cin >> pay;
    temp = TOTAL - pay;

    

    for(int i=0; i<MAX; i++) {
        if(temp == 0) {
            break;
        }
        // 해당 동전의 개수, 남은 잔돈 액수
        count = temp / cArr[i];
        newTemp = temp % cArr[i];       

        temp = newTemp;
        cnt += count; 
    }

    cout << cnt << endl;

}