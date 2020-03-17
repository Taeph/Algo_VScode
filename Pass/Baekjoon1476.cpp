
/*
 * 2019-11-11(월)
 * 
 * 입력받은 값들은, 어떤 값(year) 에서 각 값의 주기(E=15, S=28, M=19)를 나눠준 값의 나머지이다
 *
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int cnt=0, E=0, S=0, M=0;
    cin >> E >> S >> M;

    while(1) {
        // E, S, M 모두 최대값(15,28,19)이 아닌 경우
        if(E != 15 && S != 28 && M != 19) {
            if(cnt%15 == E && cnt%28 == S && cnt%19 == M) {
                break;
            }
            cnt++;
        } else { // E, S, M 중 하나라도 최대값(15,28,19)인 경우
            if(cnt%15 == (E-1) && cnt%28 == (S-1) && cnt%19 == (M-1)) {
                // 그 이전값의 년도를 구한 후, +1 을 해주면 입력한 값의 년도
                cnt = cnt + 1;
                break;
            }
            cnt++;
        }
        
    }
    cout << cnt << endl;
}


