
/*
 * 2019-11-11(월)
 * 
 * 변수형 int, double 신경써서 풀기
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tcnt=0, scnt=0, count=0; // testcaseCount , studentCount
    double scoreTotal=0, scoreAvg=0, result=0;
    cin >> scnt;

    while(scnt--) {
        scoreTotal = 0, scoreAvg = 0, count = 0, result = 0;
        cin >> tcnt;
        int arr[tcnt];
        
        // 학생들 점수 입력
        for(int i=0; i<tcnt; i++) {
            cin >> arr[i];
            scoreTotal += double(arr[i]);
        }

        // 점수 평균 구하기
        scoreAvg = scoreTotal / double(tcnt);

        // 점수 평균보다 높은 학생수 구하기
        for(int i=0; i<tcnt; i++) {
            if(double(arr[i]) > scoreAvg) {
                count++;
            }
        }

        // 평균점수를 넘은 학생들 비율 구하기
        result = count / double(tcnt) * 100;
        cout << fixed;
        cout.precision(3);
        cout << result << "%" << endl;
    }
}

