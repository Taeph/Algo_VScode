#include<iostream>
#include<algorithm>

using namespace std;

/*
 * 한수 - 각 자리수가 등차수열을 이루는 수
 * 
 * 1~99 까지는 모든 수가 등차수열을 이룬다 - 99개
 * 100 ~ 999 까지는 백의자리마다 5개의 한수를 가진다
 */ 
int main() {
    int N, total=0, idx=0;
    int nArr[5];
    cin >> N;
    if(N < 100) {
        // N < 100 일 경우에는 입력값만큼의 한수를 가진다
        total = N;
    } else if (N == 1000) {
        // N == 1000 일 경우에는, 99 + 백의자리개수 * 5
        total = 99 + 9*5;
    } else {
        // 99 < N < 1000 일 경우에는, 입력값이 어떤 한수까지 포함하는지를 찾아서 포함되는 개수만 더해준다
        total = 99;
        int h = N/100;

        // 각 백의자리마다 가지는 한수를 찾아서 배열에 저장
        for(int i=0; i<5; i++) {
            if( i == 0) {
                nArr[idx++] = h*100 + h*10 + h;
            } else {
                // 아래로 등차 ( -1, -2 ..)
                if(h-i > 0 && h-i-i >= 0){
                    nArr[idx++] = h*100 + (h-i)*10 + (h-i-i);
                } 
                // 위로 등차 ( +1, +2 ..)
                if(h+i < 10 && h+i+i < 10) {
                    nArr[idx++] = h*100 + (h+i)*10 + (h+i+i);
                }
            }
        }

        sort(nArr, nArr+5);
        // for(int k=0; k<5; k++) {
        //     cout << nArr[k] << " " << ends;
        // }
        total += 5 * (h-1);
        // cout << h << " / " << total << endl;

        for(int j=0; j<5; j++) {
            if(N >= nArr[j]) {
                // cout << N << " / " << nArr[j] << endl;
                total++;
            } else {
                break;
            }
        }
    }

    cout << total << endl;
}