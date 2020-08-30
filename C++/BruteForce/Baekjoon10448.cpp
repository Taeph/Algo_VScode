#include<iostream>

using namespace std;

/*
 * 삼각수 Tn
 * Tn = n(n+1) / 2
 * Tn = Tn-1 + n 
 */
#define MAX 45

int tArr[MAX];

int main() { 
    // 삼각수 배열 만들기
    for(int i=0; i<MAX; i++) {
        if(i==0) {
            tArr[i] = 1;
        } else {
            tArr[i] = tArr[i-1] + (i+1);
        }
    }
    
    int k, T, cnt, flag; 
    // 입력 받기
    cin >> k;
    while(k--) {
        cin >> T;

        flag = 0;
        // 브루트포스에 매우 충실한 풀이..
        for(int i=0; i<cnt; i++) {
            if(flag == 1) {
                break;
            }
            for(int j=0; j<cnt; j++) {
                if(flag == 1) {
                    break;
                }
                for(int k=0; k<cnt; k++) {
                    if(T == tArr[i] + tArr[j] + tArr[k]) {
                        flag = 1 ;
                        break;
                    }
                }
            }
        }

        cout << flag << endl;
    }

}