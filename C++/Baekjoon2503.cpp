#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

/*
 * 1~9 까지의 숫자에서 3개를 고르는 방법 - 9 * 8 * 7 = 504
 * 
 * 백준에서는 setcase() 함수를 main() 함수로 넣어서 제출해야 맞다고 한다.
 */

string numArr[504];
int idx = 0;

// 입력값으로 들어올 수 있는 모든 경우의 수를 배열로 만든다
void setcase() {
    // 입력가능한 모든 경우의 수
    for(int i=1; i<10; i++) {
        for(int j=1; j<10; j++) {
            for(int k=1; k<10; k++) {
                if(i == j || j == k || k == i) {
                    // cout << i << "," << j << "," << k << endl;
                    continue;
                } else {
                    string temp = "";
                    temp = to_string(i) + to_string(j) + to_string(k);
                    numArr[idx++] = temp;
                    // cout << temp << endl;
                }
            }
        }
    }
}

int main() {
    // 입력가능 배열 만들기
    setcase();

    int N, strike=0, ball=0, answer=0;
    char num[3];
    cin >> N;
    
    // 입력받은 숫자의 S, B의 값을 미리만든 배열과 비교한다 - 진짜 남자의 브루트 포스
    for(int i=0; i<N; i++) {
        cin >> num >> strike >> ball;
        // cout << i << " : " << num << ", " << strike << ", " << ball << endl;
        for(int j=0; j<idx; j++) {
            int sCnt=0, bCnt=0;
            // 스트라이크, 볼 비교
            const char * temp = numArr[j].c_str();
            for(int k=0; k<3; k++) {
                for(int l=0; l<3; l++) {
                    if(k == l && temp[k] == num[l]) {
                        sCnt++;
                    } else if (k != l && temp[k] == num[l]) {
                        bCnt++;
                    }
                }        
            }
            // cout << numArr[j] << ", " << sCnt << ", " << bCnt << endl;
            if(sCnt != strike || bCnt != ball ) {
                numArr[j] = "";
            }
        }
        // for(int i=0; i<idx; i++) {
        //     cout << numArr[i] << "," << ends;
        // }
    }
    for(int i=0; i<idx; i++) {
        if(numArr[i] != "") {
            answer++;
        }
    }

    cout << answer << endl;
}