/*
 * 2019-11-19(화)
 * 
 * 브루트포스(BruteForce) 문제인줄 알았는데,
 * 다들 동적계획법(DP) 사용해서 풀었다.
 * 
 * 아직 이해가 잘 안되니까, 지하철에서 계속봐야겠다.
 */

#include <iostream>
#include <algorithm>
#include <math.h>

#define MAX_SIZE 16
using namespace std;

int n, result, day[MAX_SIZE], money[MAX_SIZE], total[MAX_SIZE];

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    // 입력
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> day[i] >> money[i];
    }

    // i 번째 날 일을 하면, i + day[j] 날 돈을 받기 때문에, n+1 번째 날까지 진행한다.
    // i 는 돈을 받는날
    for(int i=1; i<=n+1; i++) {
        // j 는 의뢰를 시작하는 날
        for(int j=1; j<i; j++) {
            // j 번째 날에서 일을 안하고, i 번째 날까지 온 경우 (j < i)
            total[i] = max(total[i], total[j]);

            // j 번째 날에서 day[j] 기간 동안 일을 하고, money[j] 을 받은 경우
            if(j + day[j] == i) {
                total[i] = max(total[i], total[j] + money[j]);
                cout << "if " << endl;
            }
            cout << "i : " << i << " j : " << j << " total[i] : " << total[i] << " total[j] : " << total[j] << endl;
        }
        // 최대값 찾기
        result = max(result, total[i]);
    }
    cout << result << endl;
}