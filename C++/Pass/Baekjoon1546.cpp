
/*
 * 2019-11-11(월)
 * 
 * 변수형 int, double 신경써서 풀기
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tcnt=0, max=0;
    double avg=0, total=0;
    cin >> tcnt;

    int score[tcnt];
    double newscore[tcnt];
    
    // testcase 입력
    for(int i=0; i<tcnt; i++) {
        cin >> score[i];
        if(i==0) {
            max = score[i];
        } else {
            if(max < score[i]) {
                max = score[i];
            }
        }
    }

    // 새로 만든 점수
    for(int i=0; i<tcnt; i++) {
        newscore[i] = double(score[i]) / double(max) * 100;
        total += newscore[i];
    }
    
    // 출력
    cout << fixed;
    cout.precision(2);
    avg = total / double(tcnt);
    cout << avg << endl;
}

